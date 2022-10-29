/*
	Determinar si un numero es primo y mostrar la direccion de memoria del numero. con punteros
*/


#include <iostream>
#include <stdlib.h>

using namespace std;

bool primo(int* x)
{
	for (int i = 1; i <= *x; i++)
	{	
		if (*x < 1) // si el numero es menor que 1 no es primo
			return false;

		if (*x == 1) // si el numero es 1 no es primo 
			return false;

		//solo se ejecuta si el numero es diferente de i, e i es mayor que 1
		if (i != *x && i > 1){  
			if (*x%i == 0)     //Si el numero es divisible por cualquier otro numero 
				return false; // diferente de el mismo no es primo
						
		} 
	}

	return true;//retorna si el numero es primo
}

int main()
{

	int opcion = 0;

	do{
		system("cls");

		int num;
		int *p;

		cout << "\n Determinar numero primo\n\n\n";
		cout << "Ingrese un numero: ";
		cin  >> num;

		p = &num;

		//determinanos si es primo o no
		if (primo(p))
			cout << "\n El numero " << *p << " Es primo";
		else 
			cout << "\n El numero " << *p << " No es primo";

		cout << "\n Direccion de memoria: " << p <<endl;

		cout << "\n\n Desea hacerlo de nuevo?\n";
		cout << " 1. si";
		cout << "\n Otro. no";
		cout << "\n Ingresar: ";
		cin  >> opcion;

	}while(opcion == 1);

	cout<<"\n\n";
	system("pause");

	return 0;
}