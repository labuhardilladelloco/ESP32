/**************************************************
*	LBDL_Slider.cpp - v 1.0                                    
*	LaBuhardilladelLoco - 24-11-2022     
* 
* 	https://www.youtube.com/c/LaBuhardillaDelLoco
*
***************************************************/
#include "LBDL_Slider.h"

  


void Slider::setup(int p_touch1,int  p_touch2, int p_touch3){
  _touch1 = p_touch1;
  _touch2 = p_touch2;
  _touch3 = p_touch3; 
} 
  
  

  
String Slider::getDirection(){
	
	return direccion;
}
  
  
void Slider::clearDirection(){
	direccion = "";
}

void Slider::detectDirection(){

 
  delay(10);

  if(_touch1_activado()){
	_cuenta_atras_t1 = millis() + _precision; 
  }
  
  if(_touch2_activado()){
	_cuenta_atras_t2 = millis() + _precision;
  
  }
  
  if(_touch3_activado()){
	_cuenta_atras_t3 = millis() + _precision;
  }


  if(  (_cuenta_atras_t1 < _cuenta_atras_t2) && (_cuenta_atras_t2 < _cuenta_atras_t3)  ){
  
	if(millis() < _cuenta_atras_t1){
	  if(millis() < _cuenta_atras_t2){      
		if(millis() < _cuenta_atras_t3){
		  direccion = "RIGHT";
		  _reset();
		  
		}
	  }  
	}
  }
  

  if(  (_cuenta_atras_t3 < _cuenta_atras_t2) && (_cuenta_atras_t2 < _cuenta_atras_t1)  ){
  
	if(millis() < _cuenta_atras_t3){
	  if(millis() < _cuenta_atras_t2){ 
		if(millis() < _cuenta_atras_t1){   
		  direccion = "LEFT";
		  _reset();
		  
		}
	  } 
	}
  }


}






bool Slider::_touch1_activado(){
  int i_t1 = touchRead(_touch1);
  if((i_t1 > 0) and i_t1 < _i_limite ){
	return true;
  }else{
	return false;
  }
}

bool Slider::_touch2_activado(){
  int i_t2 = touchRead(_touch2);
  if((i_t2 > 0) and i_t2 < _i_limite ){
	return true;
  }else{
	return false;
  }
}

bool Slider::_touch3_activado(){
  int i_t3 = touchRead(_touch3);
  if((i_t3 > 0) and i_t3 < _i_limite ){
	return true;
  }else{
	return false;
  }
}	


void Slider::_reset(){
	_cuenta_atras_t1=0;
	_cuenta_atras_t2=0;
	_cuenta_atras_t3=0;
}





