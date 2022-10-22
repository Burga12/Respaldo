//Determinar cual cadena es mayor

#include <iostream>
#include <string.h>

using namespace std;

int main(){

	char x[100],y[100];

	cout << "Ingrese una cadena: ";cin.getline(x,100,'\n');
	cout << "Ingrese una cadena: ";cin.getline(y,100,'\n');

	if (strcmp(x,y) == 0){
		printf("\n\t Ambos son iguales Alfabeticamente");
	} else if (strcmp(x,y) > 0) {
		printf("\n\t Cadena 1 ingresada es mayor Alfabeticamente");
		printf("\n\t Cadena ingresada: %s\n\n",x);
	} else {
		printf("\n\t Cadena 2 ingresada es menor Alfabeticamente");
		printf("\n\t Cadena ingresada: %s\n\n",y);
	}


	return 0;
}