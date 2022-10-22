//hola

#include <iostream>

using namespace std;

int main() {
	
	float practica,teorica,participacion,notaFinal;
	
	cout<<"Digite la nota de Practicas: ";cin>>practica;
	cout<<"Digite la nota de participacion: ";cin>>participacion;
	cout<<"Digite la nota de teorica: ";cin>>teorica;
	
	practica *= 0.3;
	participacion *= 0.1;
	teorica *= 0.6;
	
	notaFinal = practica + teorica + participacion;
	
	cout<<endl;
	cout.precision(2);
	cout<<"la nota final es: "<<notaFinal;
	
	
	return 0;
}


