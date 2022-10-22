#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

	//BUSQUEDA POR SELECCION

	int array[] = {2,5,8,7,2,1,6,7,4,2,6,7,2,1,4};
	int dato = 0,contador = 0;
	bool again = 0;

	do{

		again = 0;
		system("cls");

		//Pedimos al usuario el numero que desea buscar
		cout << "\n\n\t Ingrese el numero que desea encontrar: "; cin >> dato;

		cout << "\n\n Numeros iguales: ";

		for (int i = 0; i < 15; i++)
		{
			//Comparar el dato ingresado por el usuario
			//Con todos los numeros del arreglo

			if (dato == array[i]){
				cout <<array[i]<<" ";//Mostramos todos los numeros iguales
				//Contador es para determinar que si encontro numeros iguales
				contador++; 
			}
		}

		//si no hay numeros iguales el contador sera 0
		if (contador == 0) cout<<"No hay numeros iguales. Intente buscar otro numero\n"; 

		cout << "\n\n Desea buscar otro numero?\n";
		cout << " 1. Hacerlo de nuevo\n";
		cout << " Otro. Salir\n";			
		cout << "\n Ingresar: ";cin>>dato;//Reutilizo la variable dato para las opciones

		if (dato == 1) again = 1;

	}while(again);

	cout << "\n\n\t Espero haber sido de ayuda\n\n";

	system("pause");

	return 0;
}