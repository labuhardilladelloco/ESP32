
const int portPin = 34;
int potValor = 0;

void setup() {
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  potValor = analogRead(portPin);
  Serial.println(potValor); 
  delay(1000);
}
