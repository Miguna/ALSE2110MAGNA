#include <iostream> //Para sacar datos y pedirlos.
#include <cmath>    //Para las operaciones y funciones matematicas
#include <stdlib.h> //Para la funcion atof
#include "complejo.h"

using namespace std;

//Complejo::Complejo(){ //Esto esta de sobra dado que en el .h le dije que por omision
//	re=im=0.;  //deje los parametros en 0
//}
Complejo::Complejo(float r, float i){
	re = r;
	im = i;
}
void Complejo::asignar(float r, float i){
	re = r;
	im = i;
}
float Complejo::real(){
	return re;
}
float Complejo::imag(){
	return im;
}
float Complejo::norma(){
	return sqrt(re*re+im*im);
}
float Complejo::angulo(){
	return atan2(im,re);
}
Complejo Complejo::operator+(Complejo &a){
	Complejo c;
	c.re = re + a.re;
	c.im = im + a.im;
	return c;
}
Complejo Complejo::operator-(Complejo &a){
	Complejo c;
	c.re = re - a.re;
	c.im = im - a.im;
	return c;
}
ostream& operator<<(ostream &o, Complejo &a){
    o << "("<< a.re << " + " << a.im << "j)";
}
