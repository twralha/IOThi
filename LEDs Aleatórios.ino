// VARIÁVEIS
const int LED_VERMELHO = 8;
const int LED_AMARELO = 9;
const int LED_VERDE = 10;
const int BOTAO = 11;
long ESCOLHA;
bool eAnt = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(BOTAO, INPUT);

}

void loop() {
  if (digitalRead(BOTAO) == HIGH && eAnt == false) {
    eAnt = true;
    ESCOLHA = random(1, 4);
    switch (ESCOLHA) {
      case 1:
        digitalWrite(LED_VERMELHO, HIGH);
        break;
      case 2:
        digitalWrite(LED_AMARELO, HIGH);
        break;
      case 3:
        digitalWrite(LED_VERDE, HIGH);
        break;
    }
  }
  else if (digitalRead(BOTAO) == LOW && eAnt == true) {
    eAnt = false;
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(LED_AMARELO, LOW);
    digitalWrite(LED_VERDE, LOW);
  }

}
