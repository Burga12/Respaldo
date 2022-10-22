/*
	Hacer un arreglo de estructura llamada atleta para n atletas que contenga un campo
	de nombre, pais, numero de medallas. y devuelva los datos del atleta con mas medallas
*/
	
#include <iostream>
#include <stdlib.h>

using namespace std;

struct atletas
{
	string name;
	string country;
	int numOfMedals;
};



int main()
{
	
	int numOfAthletes,mayor = 0, pos = 0;

	cout << "\n\t\t BIENVENIDO\n\n\n";

	cout << "Guardar informacion de atletas\n\n" ;

	//bucle que impedira que ingrese numeros negativos o el 0
	do{
		cout << "\n Ingrese el numero de atletas que se almacenaran: ";
		cin  >> numOfAthletes;

		if (numOfAthletes < 1)
			cout << "\n\n Numero ingresado invalido. \n Puede haber un minimo de 1 atleta\n";
	}while(numOfAthletes < 1);
	

	//creamos el arreglo de atletas. El limite sera el numero de atletas que diga el usuario
	struct atletas athlete[numOfAthletes];

	//guardar datos de los atletas

	for (int i = 0; i < numOfAthletes; ++i)
	{
		system("cls");

		cout << "\n\n Datos de atleta "<<i + 1<<". \n\n\n";
		cout << "\n\t Ingrese el nombre del atleta "<< i + 1 << ": "; 
		cin  >> athlete[i].name; fflush(stdin); //Limpiar buffer
		cout << "\n\t Ingrese el pais de recidencia del atleta "<< i + 1 << ": ";
		cin  >> athlete[i].country; fflush(stdin); //Limpiar buffer
		cout << "\n\t Ingrese el numero de medallas que ha obtenido el atleta "<< i + 1 << ": ";
		cin  >> athlete[i].numOfMedals; fflush(stdin); //Limpiar buffer

		// comparar el numero de medallas

		if (i == 0)
			mayor = athlete[i].numOfMedals;
		else {

			if (athlete[i].numOfMedals > mayor)
			{
				mayor = athlete[i].numOfMedals;
				pos = i;
			}
		}

	}


	//mostra datos del atleta con mayor numero de medallas
	system("cls");
	cout << "\n\t Atleta con mayor numero de medallas\n\n";
	cout << "\n\t\t Nombre: " << athlete[pos].name;
	cout << "\n\t\t Pais: " << athlete[pos].country;
	cout << "\n\t\t Numero de medallas: " << athlete[pos].numOfMedals;

	cout<<"\n\n";
	system("pause");

	return 0;
}
