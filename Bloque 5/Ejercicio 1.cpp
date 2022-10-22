//Eveve

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	
	int size,suma = 0,control = 0;
	

	
	cout<<"Ingrese el tamaño del arreglo: ";cin>>size;
		
	int num[size];
	
	cout<<"\nIngrese el valor de los elementos del arreglo";
	
	control = size - 1;
	cout<<endl;
	
	for (int i = 0; i < size; i++) {
		
		cout<<" ";
		cin>>num[i];
		
		suma += num[i];
	}
	
	cout<<endl;
	cout<<"Los elementos del arreglo son: ";
	
	for (int i = 0; i < size; i++) {
		
		if (i == control) {
			
			cout<<num[i]<<" ";
			
		} else {
			
			cout<<num[i]<<", ";
		}
		
		
	}
	
	cout<<endl;
	cout<<"la suma de los elementos del arreglo es: "<<suma;
	
	
	return 0;
}
