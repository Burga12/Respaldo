//7. Escriba un programa que calcule el valor de: 1+2+3+...+n


#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	
	int suma = 0,limite;
	
	cout<<"ingrese un limite: ";cin>>limite;
	
	for(int i = 1; i<=limite; i++){
		
		suma += i;
		
	}
	
	cout<<endl;
	
	cout<<suma;
	
	
	return 0;
}
