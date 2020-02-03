
int freq = 2000;

const int pinoBuzzer = 10;  //buzzer
const int pinoBotao1 = 9;   //
const int pinoBotao2 = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinoBuzzer,OUTPUT);
  pinMode(pinoBotao1, INPUT_PULLUP);
  pinMode(pinoBotao2, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(pinoBotao1) == LOW) {
    freq = freq + 1000;
  }

  if(digitalRead(pinoBotao2) == LOW) {
    freq = freq - 1000;
  }
  
  tone(pinoBuzzer, freq);
  delay(1000);
  noTone(pinoBuzzer);
  delay(1000);
}
