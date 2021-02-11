#include <iostream>
#include <cmath>    //Para las operaciones y funciones matematicas
#include <stdlib.h> //Para la funcion atof;

using namespace std;

class Complejo{  //Mi extructura complex (tipo de variable) esta formada por dos flotantes.
	float re;
	float im;
 public:
//	Complejo(); //constructor sin parametros, constructor por omision
	Complejo(float r=0., float i=0.); //constructor con parametros si les pongo 0. las incializo pero igual siempre se inicializan.
	void asignar(float r, float i);
	float real();
	float imag();
	float norma();
	float angulo();

	Complejo operator+(Complejo &a);
	Complejo operator-(Complejo &a);
};
