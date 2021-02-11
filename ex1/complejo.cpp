#include <iostream> //Para sacar datos y pedirlos.
#include <cmath>    //Para las operaciones y funciones matematicas
#include <stdlib.h> //Para la funcion atof

using namespace std;

float norma(float &re, float &im){
	return sqrt(re*re+im*im);
}

float angulo(float &re, float &im){
	return atan2(im,re);
}

int main(int argc, char** argv){

	//Voy a pasar la parte real y la parte imaginaria como parametros
	float a,b,nor,ang;
	a = b = 0.;
	a=atof(argv[1]);
	b=atof(argv[2]); // argv[] Son caracteres. asi que atof los convierte a numeros
	nor=norma(a,b);
	ang=angulo(a,b);
	cout<< "El numero complejo: " << a << "+ " << b << "j" ;
	cout << "tiene de norma= " << nor << "y un angulo= " << ang << "rad" << endl;
	return(0);
}

