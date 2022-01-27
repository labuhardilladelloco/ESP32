# SALIDAS PWM ESP32 - DEVKIT V1



**Este tipo de salidas nos permiten controlar la cantidad de energia que entregamos a una carga,
y nos servirá por ejemplo para controlar la intensidad luminosa de una lampara, la velocidad de giro de motores o incluso para reproducir sonidos.**




## Funciones Arduino IDE:




| Función | Descripción |
| ------------- | ------------- |
| ledcSetup(canal, frecuencia, resolucion) | Selecciona un canal, establece una frecuencia y resolución.
|ledcAttachPin(ledPin, canal)| Conecta el canal seleccionado con el gpio elegido.
|ledcWrite(canal, dutyCycle)| Produce la señal PWM con el ciclo de trabajo especificado.










Ver vídeo:
https://youtu.be/azFFLbQvsRc













