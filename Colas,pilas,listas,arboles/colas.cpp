#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *siguiente;
};

/*bool colaVacia(Nodo *& frente)
{
	return (frente == NULL);
}*/

void agregarElemento(Nodo *&frente, Nodo *&fin, int n)
{
 	Nodo *nuevo_nodo = new Nodo();

 	nuevo_nodo -> dato = n;
 	nuevo_nodo -> siguiente = NULL;

 	if (frente == NULL)
 		frente = nuevo_nodo;
 	else 
 		fin -> siguiente = nuevo_nodo;

 	fin = nuevo_nodo;

 	cout << "\n Elemento " << fin -> dato << " Ha sido agredado correctamente\n";
}

void quitarElemento(Nodo *&frente, Nodo *&fin, int &n)
{
	n = frente -> dato;
	Nodo *aux = frente;

	if (frente == fin){
		frente = NULL;
		fin = NULL;
	} 

	else 
		frente = frente -> siguiente;

	delete aux;

}

int main(int argc, char const *argv[])
{
	Nodo *frente = NULL;
	Nodo *fin = NULL;

		int dato,opcion;

	do{

		opcion = 0;

		cout << "\n\n Digite un numero: ";
		cin  >> dato;

		agregarElemento(frente,fin,dato);
		

		cout << "\n\n Desea ingresar otro numero?";
		cout << "\n 1 == si";
		cout << "\n otros == no";
		cout << "\n Ingresar: ";
		cin  >> opcion;

	}while(opcion == 1);

	system("cls");
	
	cout << "\n Eliminar elementos \n\n ";

	while (frente != NULL)
	{
		cout << frente -> dato;
	
			quitarElemento(frente,fin,dato);

			//mostramos una flecha siempre y cuando no sea el final de la pila
			if (frente != NULL)
				cout << " -> ";
	}

	cout << "\n\n Elementos eliminados correctamente \n\n";
	system("pause");
	return 0;
}