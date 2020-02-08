//pinos
const int p_LR = 11;
const int p_LG = 10;
const int p_LB = 9;

const int p_BR = 7;
const int p_BG = 6;
const int p_BB = 5;
const int p_BA = 4;

const int p_POT = A0;

//variáveis de estado de cada botão
int le_BR, le_BG, le_BB, le_BA, le_POT;
int pwmR = 0, pwmG = 0, pwmB = 0;

void setup() {
  pinMode(p_LR, OUTPUT);
  pinMode(p_LG, OUTPUT);
  pinMode(p_LB, OUTPUT);
  
  pinMode(p_BR, INPUT_PULLUP);
  pinMode(p_BG, INPUT_PULLUP);
  pinMode(p_BB, INPUT_PULLUP);
  pinMode(p_BA, INPUT_PULLUP);

  pinMode(p_POT, INPUT);
}

void loop() {
  le_BR = digitalRead(p_BR);
  le_BG = digitalRead(p_BG);
  le_BB = digitalRead(p_BB);
  le_BA = digitalRead(p_BA);

  le_POT = analogRead(p_POT);
///////////////////////////////////
  if(le_BR == LOW){
    if(le_BA == LOW){
      pwmR = map(le_POT, 0, 1023, 0, 255);
    }
    analogWrite(p_LR, pwmR);
  }
  else{
    analogWrite(p_LR, 0);
  }
///////////////////////////////////  
  if(le_BG == LOW){
    if(le_BA == LOW){
      pwmG = map(le_POT, 0, 1023, 0, 255);
    }
    analogWrite(p_LG, pwmG);
  }
  else{
    analogWrite(p_LG, 0);
  }
///////////////////////////////////////
  if(le_BB == LOW){
    if(le_BA == LOW){
      pwmB = map(le_POT, 0, 1023, 0, 255);
    }
    analogWrite(p_LB, pwmB);
  }
  else{
    analogWrite(p_LB, 0);
  }
  
  delay(100);
}
