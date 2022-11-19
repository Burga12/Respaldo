/* Escriba un programa que lea dos números y determine cuál de ellos es el 
mayor*/

#include <iostream> 

using namespace std;

int main() {
	
	cout<<"Hola :D\n\n";
	cout<<"Demostrar que numero es mayor de los numeros ingresados por el usuario\n";
	
	float a, b;
	
	cout<<"\nDigite el valor del primer numero: ";
	cin>>a;
	cout<<"\nDigite el valor del segundo numero: ";
	cin>>b;
	
	
	cout<<"\nlos numeros ingresados son:\n";
	cout<<"\tPrimer numero: "<< a << '\n';
	cout<<"\tSegundo numero: "<< b << "\n\n";

	//Secuencia condicional
	if (a > b) 
		cout<<"\nel numero mayor es: "<< a << '\n';
	else if (a == b) 
		cout<<"\nLos numeros son iguales\n\n";
	else
		cout<<"\nel numero menor es: "<< b << '\n';
	

	cout<<"\nGracias por usar el programa";
	
	return 0;
}
