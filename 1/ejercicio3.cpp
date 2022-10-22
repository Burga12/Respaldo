/*
    Realice un programa que lea de la entrada estándar los siguientes datos 
	de una persona:
	Edad: dato de tipo entero. 
	Sexo: dato de tipo carácter.
	Altura en metros: dato de tipo real.
*/

#include <iostream>

using namespace std;

int main()  {
	
	int edad;
	char sexo[10];
	float altura;
	
	cout<< "Ingrese su edad: ";cin>>edad;cout<<endl;
	cout<< "sos hombre o mujer?"<<endl;cin>>sexo;cout<<endl;
	cout<< "Ingrese su estatura: ";cin>>altura;cout<<endl;
	
	cout<< "Edad: "<<edad<<endl;
	cout<< "Sexo: "<<sexo<<endl;
	cout<< "Altura: "<<altura<<endl;
	
	
	
	
	return 0;
}
