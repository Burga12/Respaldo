/*5. Escriba un programa que lea valores enteros hasta que se introduzca un 
valor en el rango [20-30] o se introduzca el valor 0. El programa debe 
entregar la suma de los valores mayores a 0 introducidos.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	
	int n,suma = 0,i = 1;
	
	do {
		
		cout<<"ingrese un numero: ";cin>>n;
		
		if (n > 0)	{
			
			suma += n;
		}
			
			
		if ((n >= 20)&&(n <= 30)) {
			
			n = 0;
		} 
		
	} while (n != 0);
	
	cout<<endl;
	cout<<"La suma de los numeros mayores a 0 es: "<<suma;
	cout<<endl;
	system("Pause");
	
	return 0;
}
