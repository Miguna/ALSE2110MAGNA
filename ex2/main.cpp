#include <iostream> //Para sacar datos y pedirlos.
#include <cmath>    //Para las operaciones y funciones matematicas
#include <stdlib.h> //Para la funcion atof
#include "complejo.h"

using namespace std;

int main(int argc, char** argv){

	Complejo com, com2, coms, comr;
	Complejo *ptr, *ptr1;
	ptr = new Complejo(46.67, 34.21);  //esta llamando al constructor
	ptr1 = new Complejo(11.22 , 22.11); //esta llamando al constructor

	float nor,ang,a,b;
	a = atof( argv[1] );
	b = atof( argv[2]); //Son caracteres. asi que atof los convierte a numeros
	com.asignar(a,b);

 	a= atof ( argv[3] );
	b= atof ( argv[4] );
	com2.asignar(a,b);

	nor = com.norma(); //si lo dejo como ptr el programa me lee la norma de un puntero, lo cual no tiene sentido
	ang = com.angulo(); // pero si hago *ptr me apunta al dato que esta en la direccion de memoria

	coms = com + com2;
	comr = com - com2;
    cout << "El primer numero complejo: " << com ;
	cout << "tiene de norma = " << nor << " y un angulo = " << ang << "rad." << endl;
    cout << "El segundo numero complejo: "<< com2;
    cout << "Se suma con el primero y da: "<< coms << endl;
    cout << "y su resta da: " << comr << endl;
    cout << "Otro complejo: " << *ptr << endl;
    cout << "Otro complejo: " << *ptr1 << endl;

return 0;
}
