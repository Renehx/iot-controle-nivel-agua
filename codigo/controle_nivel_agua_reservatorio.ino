#include <WiFi.h>
#include <PubSubClient.h>
#include <ESP32Servo.h>

// Configurações Wi-Fi e MQTT
const char* ssid = "Wokwi-GUEST";
const char* password = "";
const char* mqtt_server = "broker.hivemq.com";

const int trigPin = 23;
const int echoPin = 22;
const int ledPin = 13;
const int servoPin = 14;

WiFiClient espClient;
PubSubClient client(espClient);
Servo myServo;

long duration;
int distance;

void setup_wifi() {
  delay(10);
  Serial.println();
  Serial.print("Conectando-se à rede WiFi...");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi conectado com sucesso!");
  Serial.print("Endereço IP: ");
  Serial.println(WiFi.localIP());
}

void reconnect() {
  while (!client.connected()) {
    Serial.print("Conectando ao MQTT...");
    if (client.connect("ESP32Client")) {
      Serial.println("conectado!");
    } else {
      Serial.print("falhou, rc=");
      Serial.print(client.state());
      Serial.println(" tentando novamente em 5 segundos");
      delay(5000);
    }
  }
}

void setup() {
  Serial.begin(115200);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  myServo.attach(servoPin);
  myServo.write(0); // Fechar a válvula inicialmente

  setup_wifi();
  client.setServer(mqtt_server, 1883);
}

void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();

  // Medição com o sensor ultrassônico
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distância medida: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Lógica de controle
  if (distance < 15) {
    digitalWrite(ledPin, HIGH);
    myServo.write(90); // Abrir a válvula
  } else {
    digitalWrite(ledPin, LOW);
    myServo.write(0);  // Fechar a válvula
  }

  // Publicar a distância via MQTT
  if (client.connected()) {
    String distanceStr = String(distance);
    client.publish("wokwi/ultrasonic", distanceStr.c_str());
    Serial.print("Publicado no MQTT: ");
    Serial.println(distanceStr);
  }

  delay(2000); // Aguarde a próxima leitura
}
