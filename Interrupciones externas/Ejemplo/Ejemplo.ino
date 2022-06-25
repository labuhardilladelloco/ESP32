int luz_verde = 14;
int luz_amarilla = 27;
int luz_roja = 26;
int pulsador = 25;


void IRAM_ATTR encenderTodas(){
  digitalWrite(luz_verde,HIGH);
  digitalWrite(luz_amarilla,HIGH);
  digitalWrite(luz_roja,HIGH);
}



void setup() {
  pinMode(luz_verde,OUTPUT);
  pinMode(luz_amarilla,OUTPUT);
  pinMode(luz_roja,OUTPUT);
  pinMode(pulsador, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(pulsador), encenderTodas, RISING);
}


void loop() {
  digitalWrite(luz_verde,HIGH);
  digitalWrite(luz_roja,LOW);
  digitalWrite(luz_amarilla,LOW);
  delay(2000);
  digitalWrite(luz_amarilla,HIGH);
  digitalWrite(luz_verde,LOW);
  digitalWrite(luz_roja,LOW);
  delay(2000);
  digitalWrite(luz_roja,HIGH);
  digitalWrite(luz_amarilla,LOW);
  digitalWrite(luz_verde,LOW);
  delay(2000);
}
