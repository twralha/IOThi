// pinos onde cada um dos segmentos estão conectados:
const int pino_a = 12; 
const int pino_b = 9; 
const int pino_c = 10; 
const int pino_d = 11; 

const int pino_botao = 2;
int le_botao, resultado;
//char leitura_serial;
//int tempo = 500;

void setup() {
  // configura os pinos de cada segmento como saída:
  pinMode(pino_a, OUTPUT);
  pinMode(pino_b, OUTPUT);
  pinMode(pino_c, OUTPUT);
  pinMode(pino_d, OUTPUT);

  pinMode(pino_botao, INPUT_PULLUP);

  //Serial.begin(9600);
}

void loop() {

  //if(Serial.available()>0) {

    //leitura_serial = Serial.read();
    //Serial.println(leitura_serial);
    //leitura_serial = leitura_serial - 48;

  le_botao = digitalRead(pino_botao);
  if(le_botao == LOW) {
    delay(150);
    resultado = random(1, 10);
    switch (resultado) {
      case 0:
      // aciona os bits de modo a formar o número 0000 = 0 (zero):
      digitalWrite(pino_a, LOW);
      digitalWrite(pino_b, LOW);
      digitalWrite(pino_c, LOW);
      digitalWrite(pino_d, LOW);
      //delay(tempo); // aguarda 1 segundo
      break;

      case 1:
      // aciona os bits de modo a formar o número 0001 = 1 (um):
      digitalWrite(pino_a, HIGH);
      digitalWrite(pino_b, LOW);
      digitalWrite(pino_c, LOW);
      digitalWrite(pino_d, LOW);
      //delay(tempo); // aguarda 1 segundo
      break;
      
      case 2:
      // aciona os bits de modo a formar o número 0010 = 2 (dois):
      digitalWrite(pino_a, LOW);
      digitalWrite(pino_b, HIGH);
      digitalWrite(pino_c, LOW);
      digitalWrite(pino_d, LOW);
      //delay(tempo); // aguarda 1 segundo
      break;

      case 3:    
      // aciona os bits de modo a formar o número 0011 = 3 (três):
      digitalWrite(pino_a, HIGH);
      digitalWrite(pino_b, HIGH);
      digitalWrite(pino_c, LOW);
      digitalWrite(pino_d, LOW);
      //delay(tempo); // aguarda 1 segundo
      break;
      
      case 4:
      // aciona os bits de modo a formar o número 0100 = 4 (quatro):
      digitalWrite(pino_a, LOW);
      digitalWrite(pino_b, LOW);
      digitalWrite(pino_c, HIGH);
      digitalWrite(pino_d, LOW);
      //delay(tempo); // aguarda 1 segundo
      break;
      
      case 5:
      // aciona os bits de modo a formar o número 0101 = 5 (cinco):
      digitalWrite(pino_a, HIGH);
      digitalWrite(pino_b, LOW);
      digitalWrite(pino_c, HIGH);
      digitalWrite(pino_d, LOW);
      //delay(tempo); // aguarda 1 segundo
      break;

      case 6:
      // aciona os bits de modo a formar o número 0110 = 6 (seis):
      digitalWrite(pino_a, LOW);
      digitalWrite(pino_b, HIGH);
      digitalWrite(pino_c, HIGH);
      digitalWrite(pino_d, LOW);
      //delay(tempo); // aguarda 1 segundo
      break;

      case 7:
      // aciona os bits de modo a formar o número 0111 = 7 (sete):
      digitalWrite(pino_a, HIGH);
      digitalWrite(pino_b, HIGH);
      digitalWrite(pino_c, HIGH);
      digitalWrite(pino_d, LOW);
      //delay(tempo); // aguarda 1 segundo
      break;

      case 8:
      // aciona os bits de modo a formar o número 1000 = 8 (oito):
      digitalWrite(pino_a, LOW);
      digitalWrite(pino_b, LOW);
      digitalWrite(pino_c, LOW);
      digitalWrite(pino_d, HIGH);
      //delay(tempo); // aguarda 1 segundo
      break;

      case 9:
      // aciona os bits de modo a formar o número 1001 = 9 (nove):
      digitalWrite(pino_a, HIGH);
      digitalWrite(pino_b, LOW);
      digitalWrite(pino_c, LOW);
      digitalWrite(pino_d, HIGH);
      //delay(tempo); // aguarda 1 segundo
      break;
    } 
    
  }
}
