
#include<iostream>
#include<stdlib.h>

using namespace std;

	int n,acumulador = 0;
	
int main()

{
	
	cout << "Digite el tamano del vector: "; cin>>n;
	
	int numeros[n];
	
	cout << "Ingrese los datos del vector"<<endl;
	
	for (int i = 0; i < n; i++) {
		
		cout<<i+1<<": ";cin>>numeros[i];
		
			if (acumulador < numeros[i]) { acumulador = numeros[i];	}			
	}
		
	cout << "\nEl numero mayor del vector es: "<<acumulador;
	cout<<endl;
	
	system("pause");
	
	return 0;
}
