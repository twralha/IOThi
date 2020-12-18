/*
Autor: twralha
Criado: 07/02/2020
Revisão 1: 16/12/2020
*/

// VARIÁVEIS
const int LED_VERMELHO = 8;
const int LED_AMARELO = 9;
const int LED_VERDE = 10;
const int LED_VERMELHO_P = 11;
const int LED_VERDE_P = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_VERMELHO_P, OUTPUT);
  pinMode(LED_VERDE_P, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //acende verde carro; acende vermelho pedestre
  digitalWrite(LED_VERDE, HIGH);
  digitalWrite(LED_VERMELHO_P, HIGH);
  digitalWrite(LED_VERMELHO, LOW);
  delay(3000);

  //apaga verde carro; acende amarelo
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, HIGH);
  delay(2000);

  //apaga amarelo; acende vermelho carro; apaga vermelho pedestre; acende verde pedestre
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, HIGH);
  digitalWrite(LED_VERMELHO_P, LOW);
  digitalWrite(LED_VERDE_P, HIGH);
  delay(3000);

  //apaga verde pedestre; pisca vermelho pedestre
  digitalWrite(LED_VERDE_P, LOW);
  
  digitalWrite(LED_VERMELHO_P, HIGH);
  delay(500);
  digitalWrite(LED_VERMELHO_P, LOW);
  delay(500);
  digitalWrite(LED_VERMELHO_P, HIGH);
  delay(500);
  digitalWrite(LED_VERMELHO_P, LOW);
  delay(500);

  digitalWrite(LED_VERMELHO_P, HIGH);
  delay(300);
  digitalWrite(LED_VERMELHO_P, LOW);
  delay(300);
  digitalWrite(LED_VERMELHO_P, HIGH);
  delay(200);
  digitalWrite(LED_VERMELHO_P, LOW);
  delay(200);

}
