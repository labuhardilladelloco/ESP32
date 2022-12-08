# SENSORES TÁCTILES ESP32 - DEVKIT V1



**
Los sensores táctiles del esp32 nos permiten detectar cambios en la capacitancia cuando estos son tocados.
Estos pines se pueden integrar fácilmente en almohadillas capacitivas y reemplazar botones mecánicos.**




## Funciones Arduino IDE:




| Función | Descripción |
| ------------- | ------------- |
|touchRead(uint8_t pin); | Selecciona un canal, establece una frecuencia y resolución.
|touchAttachInterrupt(uint8_t pin, void (*userFunc)(void), touch_value_t threshold);| Conecta el canal seleccionado con el gpio elegido.
|touchAttachInterruptArg(uint8_t pin, void (*userFunc)(void*), void *arg, touch_value_t threshold);| Produce la señal PWM con el ciclo de trabajo especificado.
| touchDetachInterrupt(uint8_t pin); | Selecciona un canal, establece una frecuencia y resolución.
| touchDetachInterrupt(uint8_t pin); | Selecciona un canal, establece una frecuencia y resolución.
| touchDetachInterrupt(uint8_t pin); | Selecciona un canal, establece una frecuencia y resolución.
| touchDetachInterrupt(uint8_t pin); | Selecciona un canal, establece una frecuencia y resolución.








Ver vídeo:
https://youtu.be/07b8nKLS_PM













