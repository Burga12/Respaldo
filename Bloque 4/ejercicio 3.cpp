/*3. Realice un programa que calcule y muestre en la salida estándar la suma de 
los cuadrados de los 10 primeros enteros mayores que cero.*/

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main() {
	
	int n,suma=0;
	
	for(int i = 1; i<=10; i++){
		
		n = pow(i,2);
		suma += n;
		
	}
	
	cout<<endl;
	cout<<"La suma de los cuadrados es: "<<suma;
	
	system("pause");
	
	

	return 0;
}
