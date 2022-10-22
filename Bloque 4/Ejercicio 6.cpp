/*6. Escriba un programa que calcule x^y, donde tanto x como y son enteros 
positivos, sin utilizar la función pow.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	
	int x,y,elevacion=1;
	
	cout<<"\nIngrese el valor de x: ";cin>>x;
	cout<<"Ingrese el valor de y: ";cin>>y;
	
	for(int i = 1; i <= y; i++) {
		
		elevacion *= x;
	}

	cout<<endl;
	cout<<"El resultado es: "<<elevacion;
	
	system("pause");
	

	return 0;
}
