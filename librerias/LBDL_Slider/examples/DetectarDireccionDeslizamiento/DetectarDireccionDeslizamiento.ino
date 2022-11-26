// LBDL_Slider v1.0
// Ejemplo de detección de la dirección del deslizamiento
// LabuhardillaDelLoco - 24/11/2022
// https://www.youtube.com/c/LaBuhardillaDelLoco


#include <LBDL_Slider.h>


Slider slider; //Instanciamos la clase Slider


void setup() {
 
  Serial.begin(115200);
  slider.setup(T7,T8,T9);	//Inicializamos el slider indicandole los pines touch.

}

void loop() {
  
  slider.detectDirection();	//Monitorizamos la dirección del deslizamiento.


  if(slider.getDirection() == "LEFT"){	//Obtenemos la direccion del deslizamiento.
    Serial.println("Izquierda");
    slider.clearDirection();	//Reseteamos la dirección del deslizamiento
  }

  
  if(slider.getDirection() == "RIGHT"){	//Obtenemos la direccion del deslizamiento.
    Serial.println("Derecha");
    slider.clearDirection();	//Reseteamos la dirección del deslizamiento
  }
  
}