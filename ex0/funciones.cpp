#include <iostream>

/*Este es un programa es el primer de como crear
 *
 *un archivo ejecutable a partir de codigo fuente en C/C++
 */
using namespace std;


int mayor_valor(int a, int b){
	int c = a < b ? c = b : c = a;
	b=45;
return c;
}

int mayor_ref(int &a, int &b){
	int c = a < b ? c = b : c = a;
	b=45;
return c;
}


int main( int argc, char** argv ){

	int a=0;
	int b;
	float c = 0.049;
	float d;
	int m,n;

	cout << "Ingrese dos valores enteros: ";
	cin >> a >> b >> m >>n;

	int h = mayor_valor(m,n);
	cout << "m= " << m << " y n= " << n << " el mayor es= " << h << endl;

	int i =mayor_ref(m,n);
	cout << "m= " << m << " y n= " << n << " el mayor es= " << i << endl;

	cout <<"Hello World ALSE¡¡"<< a << " "<< b << " " << c << " " << d << endl;

	cout<< "Cantidad de parametros: " << argc << endl;
	for (a=0;a < argc ; a=a+1 ){ // donde arranca el contador condicion de mantenimiento y en cuanto crece 
	cout<<"Argumento "<< a << ": " << argv[a] << endl;
	}

return 0;
}

