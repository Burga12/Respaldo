/*12. Hacer un menú que considere las siguientes opciones:
	Caso 1: Cubo de un numero
	Caso 2: Numero par o impar
	Case 3: salir.
*/


#include <iostream>
#include <math.h>

using namespace std;

int main( ) {
	
	float cubo;
	int n,op;
	
	cout<<"\tBienvenido"<<endl;
	cout<<endl;
	cout<<"Ingrese '1' para Calcular el Cubo de un numero"<<endl;
	cout<<"Ingrese '2' para Verifircar si un numero es par o no"<<endl;
	cout<<"Ingrese '3' para Salir"<<endl;cout<<endl;
	cin>>op;
	
	switch (op) {
		
		case 1: cout<<endl;cout<<"\tCubo de un numero"<<endl;cout<<endl;
				cout<<"Ingrese un numero: ";cin>>n;cout<<endl;
				cubo = pow(n,3);cout<<endl;
				cout<<"numero ingresado: "<<n;cout<<endl;
				cout<<"Cubo del numero: "<<cubo;break;
				
		case 2: cout<<endl;cout<<"\tVerificar si es par o impar"<<endl;cout<<endl;
		        cout<<"Ingrese un numero: ";cin>>n;cout<<endl;
		        
				if(n == 0) {
		            
					cout<<"El numero es 0";
		
				} else if (n % 2 == 0) {
		            
					cout<<"Es un numero par";
		
				} else {
					
					cout<<"El numero es impar";
					
				}
				
				break;
				
		case 3: cout<<endl;cout<<"Adios";break;
		
		default: cout<<endl;cout<<"No ha ingresado un dato correcto";
	
	}
	
	
	
	return 0;
}
