/*****************************************
*	LBDL-Slider.h - v 1.0                *                      
*	LaBuhardilladelLoco - 24-11-2022     *
*                                        *
******************************************/

#ifndef LBDL_Slider_h
#define LBDL_Slider_h
#include "Arduino.h"

  
  
  
  
class Slider
{
	public:
		String direccion = "";
		void setup(int p_touch1,int  p_touch2, int p_touch3);
		String getDirection();
		void clearDirection();
		void detectDirection();
		
	private:
		int _touch1;
		int _touch2;
		int _touch3;
		
		int _cuenta_atras_t1=0;
		int _cuenta_atras_t2=0;
		int _cuenta_atras_t3=0;
		
		int _precision = 300;
		int _i_limite = 50;
		
		bool _touch1_activado();
		bool _touch2_activado();
		bool _touch3_activado();
		void _reset();
	
	
};
  
  
  
  
  

#endif
  