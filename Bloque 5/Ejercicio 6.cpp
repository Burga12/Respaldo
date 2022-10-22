/*6. Escribe un programa que defina un vector de números y calcule si existe 
algún número en el vector cuyo valor equivale a la suma del resto de números 
del vector.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	
	int vector[100],n,suma = 0,aux = 0;
	bool confirm = true;
	
	cout << "Digite el tamaño del vector: ";cin>>n;cout<<endl;
	cout << "Ingrese los valores del vector\n";
	
	for (int i = 0; i < n; i++) {
		
		cout << i+1 << ": ";cin>>vector[i];
		
		suma += vector[i];
		
	}
	
		aux = suma;
	
	for(int i = 0; i < n; i++) {

		suma -= vector[i];
		
		if (suma == vector[i]) {
			
			cout << "El valor en posicion "<<i<<" Es igual a la suma del resto de numeros del vector"
			<< ": " << vector[i];
			confirm = true;
			
		} else {
			
			confirm = false;
		}
		
		suma = aux;
	}
	
	if (!confirm) {
		
		cout << "\nNo existe ningun valor igual a la suma del resto de numeros del vector";
		
	}
	
	
	cout<<endl;
	system("pause");
	
	return 0;
}
