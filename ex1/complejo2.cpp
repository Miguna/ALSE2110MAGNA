#include <iostream> //Para sacar datos y pedirlos.
#include <cmath>    //Para las operaciones y funciones matematicas
#include <stdlib.h> //Para la funcion atof

using namespace std;

struct Complex{  //Mi extructura complex (tipo de variable) esta formada por dos flotantes.
	float re;
	float im;
};

float norma(Complex &a){
	return sqrt(a.re*a.re+a.im*a.im);
}

float angulo(Complex &a){
	return atan2(a.im,a.re);
}

Complex suma(Complex &a, Complex &b){
	Complex c;
	c.re=a.re + b.im;
	c.im=b.re + b.im;
	return c;
}
Complex resta(Complex &a, Complex &b){
	Complex c;
	c.re = a.re - b.re;
	c.im = a.im - b.im;
	return c;
}

int main(int argc, char** argv){

	Complex com, com2, coms, comr;
	Complex *ptr;
	ptr = new Complex();
	ptr->re=46.67;
	ptr->im=34.21;

	float nor,ang;
	com.re = atof( argv[1] );
	com.im = atof( argv[2]); //Son caracteres. asi que atof los convierte a numeros
 	com2.re= atof ( argv[3] );
	com2.im= atof ( argv[4] );

	nor = norma( *ptr ); //si lo dejo como ptr el programa me lee la norma de un puntero, lo cual no tiene sentido
	ang = angulo( *ptr ); // pero si hago *ptr me apunta al dato que esta en la direccion de memoria

	coms = suma(com,com2);
	comr = resta(com,com2);
	cout << "El primer numero complejo: (" << com.re << " + " << com.im << "j) " ;
	cout << "tiene de norma = " << nor << " y un angulo = " << ang << "rad." << endl;
	cout << "El segundo numero complejo: (" << com2.re << " + " << com2.im << "j) ";
	cout << "Se suma con el primero y da: ("<< coms.re << " + " << coms.im << "j)"<< endl;
	cout << "y su resta da: (" << comr.re << " + " << comr.im << "j) " << endl;
	return(0);
}
