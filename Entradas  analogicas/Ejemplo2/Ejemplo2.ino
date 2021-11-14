const int portPin = 34;

const int led1 = 25;
const int led2 = 33;
const int led3 = 32;

int potValor = 0;

void setup() {
  Serial.begin(115200);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  
  delay(1000);
}
void loop() {

  potValor = analogRead(portPin);
  Serial.println(potValor);



  if(potValor >= 1365){
    digitalWrite(led1,HIGH);
  }else if(potValor < 1365){
    digitalWrite(led1,LOW);
  }
  

  if(potValor >= 2730){
    digitalWrite(led2,HIGH);
  }else if(potValor < 2730){
    digitalWrite(led2,LOW);
  }

  if(potValor == 4095){
    digitalWrite(led3,HIGH);
  }else if(potValor < 4095){
    digitalWrite(led3,LOW);
  }

  
  delay(100);
}
