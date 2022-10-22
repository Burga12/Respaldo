//Copiar el contenido de una cadena en otra

#include <iostream>
#include <string.h>

using namespace std;

int main(){

	char word[100],word2[100];

	cout << "Ingrese una cadena: ";cin.getline(word,100,'\n');
	
	strcpy(word2,word);

	cout<< "Cadena ingreasa: "<<word2;

	return 0;
}