# 💧 Sistema IoT de Controle de Nível de Água com ESP32 e MQTT

Este projeto propõe uma solução inteligente para o controle de nível de água em reservatórios domésticos ou empresariais, utilizando ESP32, sensor ultrassônico, servo motor e protocolo MQTT para monitoramento em tempo real via Internet.

## 📌 Funcionalidades
- Leitura do nível de água com sensor HC-SR04
- Abertura/fechamento automático de válvula com Servo Motor SG90
- Indicador LED para níveis críticos
- Envio de dados para broker MQTT (HiveMQ)
- Simulação completa na plataforma Wokwi

## 🎥 Demonstração em vídeo
👉 [Clique aqui para ver o vídeo de funcionamento no YouTube](https://youtu.be/SEU-LINK-AQUI)

## 📂 Estrutura do Projeto
- `codigo/`: Código-fonte do projeto em C++ (Arduino)
- `documentacao/`: Documentos técnicos e diagramas
- `imagens/`: Capturas de tela do protótipo e MQTT
- `README.md`: Este arquivo

## 🧠 Tecnologias Utilizadas
- ESP32 DevKitC-32E
- Sensor Ultrassônico HC-SR04
- Servo Motor SG90
- LED e resistor
- Protocolo MQTT com broker HiveMQ
- Plataforma de simulação Wokwi

## 📚 Documentação Completa
Veja os arquivos em `documentacao/`:
- `hardware.md`: Lista de componentes e esquemas
- `software.md`: Bibliotecas, estrutura do código e lógica
- `protocolo_MQTT.md`: Comunicação via MQTT

## 🛠️ Como Executar no Wokwi
1. Acesse [https://wokwi.com](https://wokwi.com)
2. Importe o código de `codigo/controle_nivel_reservatorio.ino`
3. Faça as conexões como descritas no diagrama
4. Acompanhe a leitura em tempo real no console MQTT

## 📑 Licença
Este projeto está licenciado sob a Licença MIT - consulte o arquivo [LICENSE](LICENSE) para mais detalhes.

---
Desenvolvido por [Seu Nome] – 2025
