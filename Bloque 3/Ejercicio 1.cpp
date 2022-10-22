/* Escriba un programa que lea dos números y determine cuál de ellos es el 
mayor*/

#include <iostream> 

using namespace std;

int main()  {
	
	cout<<"Hola :D"<<endl;cout<<endl;
	cout<<"Demostrar que numero es mayor de los numeros ingresados por el usuario"<<endl;
	
	float a,b;
	
	cout<<endl;
	cout<<"Digite el valor del primer numero: ";cin>>a;cout<<endl;
	cout<<"Digite el valor del segundo numero: ";cin>>b;cout<<endl;
	
	
	//Secuencia condicional
	if (a > b) {
		
		cout<<endl;
		cout<<"los numeros ingresados son:"<<endl;cout<<endl;
		cout<<"Primer numero: "<<a<<endl;
		cout<<"Segundo numero: "<<b<<endl;cout<<endl;
		cout<<"el numero mayor es: "<<a;cout<<endl;
		
		
	} else if (a == b) {
		
		cout<<endl;
		cout<<"los numeros ingresados son:"<<endl;cout<<endl;
		cout<<"Primer numero: "<<a<<endl;
		cout<<"Segundo numero: "<<b<<endl;cout<<endl;
		cout<<"Los numeros son iguales"<<endl;cout<<endl;
	
	} else {
		
		cout<<endl;
		cout<<"los numeros ingresados son:"<<endl;cout<<endl;
		cout<<"Primer numero: "<<a<<endl;
		cout<<"Segundo numero: "<<b<<endl;cout<<endl;
		cout<<"el numero mayor es: "<<b;cout<<endl;
	}
	
	cout<<endl;
	cout<<"Gracias por usar el programa";
	
	return 0;
}
