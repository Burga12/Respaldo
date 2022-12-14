//Pilas

#include <iostream>
#include <stdlib.h>

using namespace std;


struct Nodo
{
	int dato;
	Nodo *siguiente; 
};

//Funcion para agregar elementos a la pila
void push(Nodo *&pila,int n)
{	
	Nodo *New_nodo = new Nodo();//Creamos el nodo
	New_nodo -> dato = n;//almancenamos el dato en el nodo
	New_nodo -> siguiente = pila; // igualamos el nodo al puntero pila
	pila = New_nodo;//iguales pila al nuevo nodo

	cout << "\n Numero " << (New_nodo -> dato) << " Agregado correctamente\n";
}

//Funcion para sacar elementos de la pila
void put(Nodo *&pila,int &n)
{
	Nodo *aux = pila;//declarar la variable tipo nodo auxiliar
	n = aux -> dato; // igualar el valor n a el dato del nodo
	pila = aux -> siguiente; // igualar pila al siguiente nodo
	delete aux; //eliminar el nodo

}

int main()
{
	
	int n1,n2;
	char opcion[10];


	

	do {

		Nodo *pila = NULL;
		cout << "\n Bienvenido este es un programa de practica con pilas \n\n";
		cout << "\n A continuacion se le pedira ingresar numeros enteros \n";
		cout << "\n Posteriormente se mostraran los numeros ingresados\n\n";

		do{

			
			cout << "\n\n Ingrese un numero: ";
			cin  >> n1;

			push(pila,n1);
			fflush(stdin);
			cout << "\n Desea agregar otro numero?\n";
			cout << "\n s -> si";
			cout << "\n otro caracter -> no";
			cout << "\n Ingresar: ";
			cin.getline(opcion,10,'\n');
			system("cls");
		}while (opcion[0] == 's');

		cout << "\n\n\n Sacando elementos de la pila\n\n ";

		while (pila != NULL)
		{

			cout << pila -> dato;
	
			put(pila,n1);

			//mostramos una flecha siempre y cuando no sea el final de la pila
			if (pila != NULL)
				cout << " -> ";
		}

		cout << "\n\n\n Desea hacerlo de nuevo?\n";
		cout << "\n s -> si";
		cout << "\n otro caracter -> no";
		cout << "\n Ingresar: ";
		cin.getline(opcion,10,'\n');
		system("cls");
		
	}while(opcion[0] == 's');

	

	cout << "\n\n";
	system("pause");
	return 0;
}