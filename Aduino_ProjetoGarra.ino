//BIBLIOTECAS
#include <Servo.h>
Servo servoMotor; //instancia o objeto

//PINOS
const int VRX = A4, VRY = A5, SW = 2;
const int pServo = 9;

//VARIÁVEIS
const int fecha = 140, abre = 10; //posições limite do servo
int posicaoMelhor = 500, posicao = 0;
int flag = 0; //indica a tendência do movimento 

void setup() {
  pinMode(VRX, INPUT);
  pinMode(VRY, INPUT);
  pinMode(SW, INPUT_PULLUP);

  servoMotor.attach(pServo);

  Serial.begin(9600);
}

void loop() {
  imprime_joystick();
  if(analogRead(VRY) <= 400 && flag == 0) {
    flag = 1; //abre
  }

  else if(analogRead(VRY) >= 600 && flag == 0) {
    flag = 2; //fecha
  }

  if(digitalRead(SW) == HIGH) {
    if(flag == 1) {
      if(analogRead(VRY) < posicaoMelhor) {
        posicaoMelhor = analogRead(VRY); 
      } 
    }
    else if(flag == 2) {
      if(analogRead(VRY) > posicaoMelhor) {
        posicaoMelhor = analogRead(VRY);
      }
    }
    else {
      posicaoMelhor = analogRead(VRX);
    }
  }
  else {
    flag = 0;
    posicaoMelhor = 500;
  }

  posicao = map(posicaoMelhor, 0, 1023, abre, fecha);
  servoMotor.write(posicao);
  delay(10);
}

//FUNÇÕES
void imprime_joystick() {
  Serial.print("VRX: ");
  Serial.print("\t");
  Serial.print(analogRead(VRX));
  Serial.print("\t");

  Serial.print("VRY: ");
  Serial.print("\t");
  Serial.print(analogRead(VRY));
  Serial.print("\t");

  Serial.print("SW: ");
  Serial.print("\t");
  Serial.println(digitalRead(SW));
}
