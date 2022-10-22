//hacer un programa que pida al usuario que ingrese una cadena de carateres
//si esta tiene 10 o mas caracteres mostrarla en pantalla

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){

	cout<<"Mostrar solo cadenas mayores a 10 digitos\n\n";

	char word[100];

	cout << "Ingrese una cadena de caracteres: "; cin.getline(word,100,'\n');
	int n = strlen(word);

	if (n >= 10){
		cout<< "\n\nCadena ingresada cumple con lo requerido\n";
		cout<< "\nCadena: "<<word;
	} else {
		cout<< "\n\nCadena ingresada no cumple con lo requerido\n";
	}

	return 0;
}