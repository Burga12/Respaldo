#include <iostream>
#include <stdlib.h>


//Metodo de busqueda binaria solo funciona con vectores ordenados

using namespace std;

int main()
{

	int numeros[] = {1,2,3,4,5,20,22};
	int sup,mitad,inf = 0; // sup == Superior. mitad == mitad. inf == inferior
	bool confirm = 0;
	int dato;//almacena el numero que ingresa el usuario

	cout << "\n\t\t BUSQUEDA BINARIA \n\n\n\n";

	cout << " Ingrese un numero a buscar: ";
	cin  >> dato;

	//algoritmo de busqueda binaria

	sup = 7; //superior es igual al numero de elementos

	//Se repetira hasta que encuentre el numero o inf sea menor que sup - 1
	while(inf < sup - 1)
	{
		mitad = (inf+sup)/2;

		if (numeros[mitad] == dato)
		{
			confirm = 1;
			break;
		}

		if (numeros[mitad] > dato)
		{
			sup = mitad;
			mitad = (inf+sup)/2;//refrescamos mitad
		}

		if (numeros[mitad] < dato)
		{
			inf = mitad;
			mitad = (inf+sup)/2;//refrescamos mitad
		}	
	}

	if (confirm){

		cout << "\n\n Numero encontrado: "<<numeros[mitad];
		cout << "\n Posicion en la que fue encontrado: "<<mitad;
	} 
	else
		cout << "\n\n Numero no encontrado\n";


	printf("\n\n");
	system("pause");
	return 0;
}