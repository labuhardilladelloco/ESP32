# ENTRADAS ANALÓGICAS ESP32 - DEVKIT V1


## Funciones Arduino IDE:




| Función | Descripción |
| ------------- | ------------- |
| analogReadResolution(resolución) | Establece los bits de muestra y la resolución. Puede ser un valor entre 9 (0 – 511) y 12 bits (0 – 4095). La resolución predeterminada es de 12 bits.  |
| analogSetWidth(ancho)  | Establece los bits de muestra y la resolución. Puede ser un valor entre 9 (0 – 511) y 12 bits (0 – 4095). La resolución predeterminada es de 12 bits.  |
| analogSetCycles(ciclos) | Establece el número de ciclos por muestra. El valor predeterminado es 8. Rango: 1 a 255. |
| analogSetSamples(muestras) | Establece el número de muestras en el rango. El valor predeterminado es 1 muestra. Tiene el efecto de aumentar la sensibilidad. |
| analogSetClockDiv(atenuación) | Establece el divisor para el reloj ADC. El valor predeterminado es 1. Rango: 1 a 255. |
| analogSetAttenuation(atenuación) | Establece la atenuación de entrada para todos los pines ADC. El valor predeterminado es ADC_0db. Valores aceptados: **ADC_0db**: Cuando la tensión de entrada se aproxime a 1 V ,si la resolucion es de 12 bits el valor de lectura llegara al maximo, 4095.
**ADC_2_5db**: El voltaje de entrada del ADC se atenuará, extendiendo el rango de medición hasta aprox. 1400 mV. (Entrada 1.4V = lectura ADC de rango maximo de 4095).
**ADC_6db**: El voltaje de entrada del ADC se atenuará, extendiendo el rango de medición hasta aprox. 1920 mV. (Entrada 1.9V = lectura ADC de 4095).
**ADC_11db**: El voltaje de entrada del ADC se atenuará, extendiendo el rango de medición hasta aprox. 3200 mV. (Entrada aprox 3,2v = lectura ADC de 4095).|



| analogSetCycles(ciclos) | Establece el número de ciclos por muestra. El valor predeterminado es 8. Rango: 1 a 255. |








```c
analogSetAttenuation(atenuación)
```
Establece la atenuación de entrada para todos los pines ADC. El valor predeterminado es ADC_0db. 
Valores aceptados:
**ADC_0db**: Cuando la tensión de entrada se aproxime a 1 V ,si la resolucion es de 12 bits el valor de lectura llegara al maximo, 4095.
**ADC_2_5db**: El voltaje de entrada del ADC se atenuará, extendiendo el rango de medición hasta aprox. 1400 mV. (Entrada 1.4V = lectura ADC de rango maximo de 4095).
**ADC_6db**: El voltaje de entrada del ADC se atenuará, extendiendo el rango de medición hasta aprox. 1920 mV. (Entrada 1.9V = lectura ADC de 4095).
**ADC_11db**: El voltaje de entrada del ADC se atenuará, extendiendo el rango de medición hasta aprox. 3200 mV. (Entrada aprox 3,2v = lectura ADC de 4095).


```c
analogSetPinAttenuation(pin, atenuación)
```
Establece la atenuación de entrada para el pin especificado. El valor predeterminado es ADC_0db. Los valores de atenuación son los mismos de la función anterior.


```c
adcAttachPin(pin)
```
Adjunta un pin al ADC (también borra cualquier otro modo analógico que pueda estar activado). Devuelve un resultado VERDADERO o FALSO.


```c
adcStart(pin), adcBusy(pin) y resultadcEnd(pin)
```
Inicia una conversión ADC en el bus del pin adjunto. Compruebe si la conversión en el bus ADC del pin se está ejecutando actualmente (devuelve VERDADERO o FALSO). Obtener el resultado de la conversión: devuelve un entero de 16 bits.

