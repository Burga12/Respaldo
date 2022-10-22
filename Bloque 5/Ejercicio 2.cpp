

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	
	int size,mul = 1,control = 0;
		
	cout<<"Ingrese el tamano del arreglo: ";cin>>size;
		
	int num[size];
	
	cout<<"\nIngrese el valor de los elementos del arreglo";
	
	control = size - 1;
	
	cout<<endl;
	
	for (int i = 0; i < size; i++) {
		
		cout<<(i+1)<<": ";
		cin>>num[i];
		
		mul *= num[i];
	}
	
	cout<<"\nLos elementos del arreglo son: ";
	
	for (int i = 0; i < size; i++) {
		
		
		if (i != control) {
			
			//Imprime los numeros con punto y coma al lado derecho
			cout<<num[i]<<"; ";
			
		} else {
			//Imprimir el ultimo numero sin punto y coma
			cout<<num[i]<<" ";
		}
		
		
	}
	
	cout<<"\nla multiplicacion de los elementos del arreglo es: "<<mul;
	
	cout<<"\n"<<endl;system("pause");
	
	
	return 0;
}
