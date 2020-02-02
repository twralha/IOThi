void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //acende verde carro; acende vermelho pedestre
  digitalWrite(8, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(10, LOW);
  delay(3000);

  //apaga verde carro; acende amarelo
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(2000);

  //apaga amarelo; acende vermelho carro; apaga vermelho pedestre; acende verde pedestre
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  delay(3000);

  //apaga verde pedestre; pisca vermelho pedestre
  digitalWrite(9, LOW);
  
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);

}
