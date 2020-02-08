//pinos
const int p_POT = A0;
const int p_L1 = 11;

//variáveis
int leitura = 0;
int pwm = 0;

void setup() {
  pinMode(p_POT, INPUT);
  pinMode(p_L1, OUTPUT);
}

void loop() {
  leitura = analogRead(p_POT);

  pwm = map(leitura, 0, 1023, 0, 255);

  analogWrite(p_L1, pwm);
}
