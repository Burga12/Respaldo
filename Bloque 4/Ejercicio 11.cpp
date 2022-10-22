//11. Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n

#include <iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main() {
	
	int n,suma = 0,elevacion, elevado = 0;
	cout<<"Digite un numero: ";cin>>n;
	cout<<"Digite el nivel de elevacion: ";cin>>elevacion;
	
	for(int i = 1; i <= elevacion; i++) {
		
		elevado = pow(n,i);
		
		suma += elevado;
		
	}
	
	
	cout<<endl;
	cout<<"El resultado es: "<<suma;
	
	cout<<endl;
	system("pause");
	
	
	return 0;
}
