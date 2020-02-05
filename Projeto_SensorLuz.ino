/*Entradas analógicas interpretam variações de 0V a 5V.
  São ligadas a ADC (conversor analógico-digital), que convertem
  a leitura analógica em um sinal digital com resolução de 10 bits,
  o que permite 2 ^ 10 = 1024 divisões de 0 a 5V.*/

const int p_LDR = A0; //pino em q o LDR está ligado
const int p_L1 = 7;
int leitura = 0;      //valor lido pelo ADC (de 0 a 1023)
float tensao = 0.0;   //valor convertido de tensão

void setup() {
  Serial.begin(9600); //taxa de dados da comunicação
  
  pinMode(p_LDR, INPUT);
  pinMode(p_L1, OUTPUT);
}

void loop() {
  //lê o valor da tensão no pino do LDR
  leitura = analogRead(p_LDR);

  Serial.print("Leitura: ");
  Serial.print(leitura);
  Serial.print("\t"); //tabulação

  //converte o valor lido em tensão
  tensao = leitura * 5.0 / 1023.0;

  Serial.print("Tensão: ");
  Serial.print(tensao);
  Serial.print("V"); //tabulação

  Serial.println(); //nova linha

  if(leitura < 400) {
    digitalWrite(p_L1, HIGH);
  }
  else {
    digitalWrite(p_L1, LOW);
  }

  delay(100); //aguarda 1 segundo para nova leitura
}
