#include "DHT.h"

const int p_DHT = 9;
float temp, umid;
DHT dht(p_DHT, DHT11);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000); //aguarda 2s (datasheet)

  temp = dht.readTemperature(); //lê a temp em °C
  umid = dht.readHumidity();    //lê a umidade

  if(isnan(temp) || isnan(umid)){
    Serial.println("Falha na leitura do sensor DHT!");
  } 
  else{
    Serial.print("Temperatura: ");
    Serial.print(temp);
    Serial.print("°C\t");

    Serial.print("Umidade: ");
    Serial.print(umid);
    Serial.print("%");
    
    Serial.println();
  }
}
