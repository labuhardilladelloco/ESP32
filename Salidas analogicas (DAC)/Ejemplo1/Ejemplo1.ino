//Ejemplo regulación de intensidad de LED.

https://www.youtube.com/c/LaBuhardillaDelLoco


void setup()
{
}

void loop()
{
  for(int i=0;i<255;i++){
    dacWrite(25,i);
    delay(100);
  }
  
}
