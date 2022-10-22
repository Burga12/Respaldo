/*10. Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! 
(suma de factoriales).*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	
	int suma = 1,limite, sumaFactorial = 0;
	
	cout<<"ingrese un numero: ";cin>>limite;
	
	for(int i = 1; i<=limite; i++){
		
		suma *= i;
		sumaFactorial += suma;
	}
	
	cout<<endl;
	
	cout<<suma;
	
	cout<<endl;
	
	cout<<sumaFactorial;
	
	cout<<endl;
	
	system("pause");
	
	return 0;
}
