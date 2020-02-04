//pinos
const int p_L1 = 13;
const int p_L2 = 12;
const int p_L3 = 11;
const int p_BUZ = 10;
const int p_B1 = 9;
const int p_B2 = 8;
const int p_B3 = 7;

//frequências
const int c = 261; // Dó
const int d = 293; // Ré
const int e = 329; // Mi
const int f = 349; // Fá
const int g = 391; // Sol
const int a = 440; // Lá
const int b = 493; // Si


void setup() {
  pinMode(p_L1, OUTPUT);
  pinMode(p_L2, OUTPUT);
  pinMode(p_L3, OUTPUT);
  pinMode(p_BUZ, OUTPUT);
  pinMode(p_B1, INPUT_PULLUP);
  pinMode(p_B2, INPUT_PULLUP);
  pinMode(p_B3, INPUT_PULLUP);
}

void loop() {
  //variáveis com o estado de cada botão
  bool estado_B1 = digitalRead(p_B1);
  bool estado_B2 = digitalRead(p_B2);
  bool estado_B3 = digitalRead(p_B3);

  //age de acordo com qual botão está pressionado
  if(estado_B1 == LOW) {
    tone(p_BUZ, c);
    digitalWrite(p_L1, HIGH);
    digitalWrite(p_L2, LOW);
    digitalWrite(p_L3, LOW);
  }
  else if(estado_B2 == LOW) {
    tone(p_BUZ, d);
    digitalWrite(p_L1, LOW);
    digitalWrite(p_L2, HIGH);
    digitalWrite(p_L3, LOW);
  }
    else if(estado_B3 == LOW) {
    tone(p_BUZ, e);
    digitalWrite(p_L1, LOW);
    digitalWrite(p_L2, LOW);
    digitalWrite(p_L3, HIGH);
  }
  else {
    noTone(p_BUZ);
    digitalWrite(p_L1, LOW);
    digitalWrite(p_L2, LOW);
    digitalWrite(p_L3, LOW);
  }
}
