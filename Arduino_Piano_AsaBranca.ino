//PINOS
const int pBuz = 8;
const int pBot = 9;

//VARIÁVEIS
int tempo = 1000;

//NOTAS
const int c = 261; // Dó
const int d = 293; // Ré
const int e = 329; // Mi
const int f = 349; // Fá
const int g = 391; // Sol
const int a = 440; // Lá
const int b = 493; // Si

//MÚSICA
int notas[] = {c, d, e, g, g, e, f, f, 0, c, d, e, g, g, f, e, 0, c, c, d, e, g, 0, g, f, e, c, f, 0, f, e, d, d, e, 0, d, d, c, c,0};
int tempos[] = {4, 4, 2, 2, 2, 2, 2, 2, 2, 4, 4, 2, 2, 2, 2, 1, 4, 4, 4, 4, 2, 2, 4, 4, 4, 4, 2, 2, 4, 4, 4, 4, 2, 2, 4, 4, 4, 4, 1};
int tamanho = 0, i;

void setup() {
  pinMode(pBuz, OUTPUT);
  pinMode(pBot, INPUT_PULLUP);

  tamanho = sizeof(notas) / sizeof(notas[0]); //sizeof() retorna o número de bytes
  for(i = 0; i < tamanho; i++) {
    tempos[i] = tempo / tempos[i];
  }
}

void loop() {
  if(digitalRead(pBot) == LOW) {
    for(i = 0; i < tamanho; i++) {
      if(notas[i] == 0) {
        noTone(pBuz);
        delay(tempos[i]);
      } else {
        tone(pBuz, notas[i]);
        delay(tempos[i]);
        noTone(pBuz);
      }
    }
  }
}

//FUNÇÕES
