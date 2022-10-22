//Pedir al usuario que digite una cadena y verificar si esta tiene mas de 10 
//caracteres si los tiene mostrarla en pantalla

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){

	char word[100];

	cout << "Si la cadena tiene mas de 10 caracteres sera mostrada\n\n";
	cout << "Ingrese alguna frase: ";cin.getline(word,100,'\n');

	if (strlen(word) > 10){
		cout << "\nCadena ingresada: "<<word;
	} else{
		cout << "\nNo cumple con lo indicado";
	}

	return 0;
}