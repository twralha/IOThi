const int p_L1 = 10;
const int p_BUZ = 9;
const int p_B1 = 8;
const int p_LDR = A0;

int leitura = 0;
int leitura_B1;

void setup() {
  pinMode(p_L1, OUTPUT);
  pinMode(p_BUZ, OUTPUT);
  pinMode(p_B1, INPUT_PULLUP);
  pinMode(p_LDR, INPUT);

  Serial.begin(9600);
}

void loop() {
  leitura = analogRead(p_LDR);
  leitura_B1 = digitalRead(p_B1);

  Serial.print("Leitura: ");
  Serial.print(leitura);
  Serial.print("\t");

  if (leitura <= 700) 
    {Serial.print("Sim");
    tone(p_BUZ, 500);
    digitalWrite(p_L1, HIGH);
    }
  else if (leitura_B1 == LOW)
    {Serial.print("Não");
    noTone(p_BUZ);
    digitalWrite(p_L1, LOW);
    }

  Serial.println();

  delay(500);
}
