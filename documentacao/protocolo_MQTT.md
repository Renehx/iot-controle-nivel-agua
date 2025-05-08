# 🌐 Comunicação via MQTT

## Broker utilizado:
- **HiveMQ** (broker público)
- Acesse: [https://www.hivemq.com/demos/websocket-client/](https://www.hivemq.com/demos/websocket-client/)

## Configurações do Broker para receber dados do protótipo:
Em 'Connection': 
- Host: `mqtt-dashboard.com`
- Port: `8884`
- ClientID: mantenha o nome padrão ou escolha outro
- Username: Wokwi-GUEST
  
Em 'Subscriptions' -> 'Add New Topic Subscription':
- Escolha uma cor, QoS = 2
- Coloque no tópico de publicação (topic): `wokwi/ultrasonic` -> clique em Subscribe
- Por fim clique em Connect na parte 'Connection'

## Fluxo de comunicação:
1. O ESP32 conecta-se à rede Wi-Fi
2. Inicia a conexão com o broker MQTT
3. Publica os dados de distância lidos do HC-SR04
4. Monitoramento dos dados via painel do HiveMQ (também aparecem no terminal do Wokwi)

## Requisitos:
- Internet estável
- Biblioteca `PubSubClient.h`
- Acesso ao broker público (ou privado - necessário configurar)
