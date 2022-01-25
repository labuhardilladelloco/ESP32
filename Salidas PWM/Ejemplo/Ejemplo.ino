const int ledPin = 32;  

// propiedades PWM
const int frecuencia = 5000;
const int canal = 0;
const int resolucion = 8;
 
void setup(){
  
  //configuramos la funcionalidad PWM
  ledcSetup(canal, frecuencia, resolucion);
  
  //Asociamos el canal al GPIO
  ledcAttachPin(ledPin, canal);
}
 
void loop(){
  
  //Incrementamos el brillo.
  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
    ledcWrite(canal, dutyCycle);
    delay(15);
  }

  //Decrementamos el brillo
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    ledcWrite(canal, dutyCycle);   
    delay(15);
  }
}
