# 💧 Sistema IoT de Controle de Nível de Água com ESP32 e MQTT

Esse projeto foi desenvolvido para a disciplina de Objetos Inteligentes com base na ODS 6 como requisito obrigatório. Propõe uma solução para o controle de nível de água em reservatórios domésticos ou empresariais, utilizando o microcontrolador ESP32, sensor ultrassônico HC-SR04, Servo Motor SG90 e protocolo MQTT para monitoramento em tempo real via Internet.

## 📌 Funcionalidades
- Leitura do nível de água com sensor HC-SR04
- Abertura/fechamento de válvula com Servo Motor SG90
- Indicador visual LED para nível da água
- Envio de dados para broker MQTT (HiveMQ)
- Simulação completa na plataforma Wokwi

## 📂 Estrutura do Projeto
- `codigo/`: Código-fonte do projeto em C++ (compatível com IDE do Arduino ou o simulador Wokwi, por exemplo)
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
- `protocolo_MQTT.md`: Comunicação via MQTT (configuração e funcionamento)

## 🛠️ Como Executar o projeto no simulador Wokwi
1. Acesse o simulador pelo site: [https://wokwi.com](https://wokwi.com)
2. Importe o código de `codigo/controle_nivel_reservatorio.ino`
3. Faça as conexões como descritas no diagrama
4. Configure o broker HiveMQ
5. Acompanhe a leitura em tempo real no console do MQTT

## 📑 Licença
Este projeto está licenciado sob a Licença MIT - consulte o arquivo [LICENSE](LICENSE) para mais detalhes.

---
Desenvolvido por [Seu Nome] – 2025
