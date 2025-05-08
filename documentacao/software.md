# 💻 Software

## Bibliotecas Utilizadas
- `WiFi.h`
- `PubSubClient.h`
- `ESP32Servo.h`

## Atributos modificados do Wokwi-servo 
- Leia a documentação do wokwi-servo
- No arquivo diagram.json busque o `"type": wokwi servo'`
- Personalize e modifique os atributos (attrs {} ) conforme necessidade
- Para esse projeto usou-se: `"attrs": { "horn": "double", "horncolor": "magenta" }`

## Estrutura do Código
1. Conecta-se ao Wi-Fi
2. Estabelece conexão com o broker MQTT HiveMQ
3. Lê a distância (cm) por meio do sensor ultrassônico HC-SR04 
4. Publica a distância (cm) no tópico `wokwi/ultrasonic` (ver documento protocolo_MQTT)
5. Controla o LED e o Servo Motor com base no nível detectado

## Lógica:
- Se distância < 15 cm:
  - Aciona servo (90°), acende LED
- Se distância > 15 cm:
  - Fecha servo (0°), apaga LED
