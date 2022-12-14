#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo
{
	int dato;
	Nodo *siguiente;
};


void insertarLista(Nodo *&lista, int n)
{
	Nodo *nuevo_nodo = new Nodo();//Reservamos memorio

	nuevo_nodo -> dato = n;//guardamos el dato en el nodo

	//declaramos las variables de tipo nodo auxiliares
	Nodo *aux1 = lista;
	Nodo *aux2;

	//bucle para guardar ordenadamente los datos
	while((aux1 != NULL) && (aux1 -> dato < n))
	{
		aux2 = aux1;
		aux1 = aux1 -> siguiente;
	}

	if (lista == aux1)//guardar al principio
		lista = nuevo_nodo;
	else
		aux2 -> siguiente = nuevo_nodo;//guardamos al medio o al final del a lista

	nuevo_nodo -> siguiente = aux1; //aignamos al nuevo nodo el nodo siguiente de el

	cout << "\n Elemento " << nuevo_nodo->dato << " Guardado correctamente\n\n";
	fflush(stdin);//limpiar buffer
}

void mostrar(Nodo *lista)
{

	Nodo *aux = lista;	

	if (lista == NULL)
		cout << "\n Aun la lista esta vacia, porfavor ingrese algun elemento\n";
	else 
	{
		cout << "\n\n Elementos almacenados: ";

		while(aux != NULL)
		{
			cout << " " << aux->dato;
			aux = aux -> siguiente;
		}
	}
}


int main()
{

	Nodo *lista = NULL;
	char opcion[10];
	int dato = 0;
		
	do{

		do{	

			cout << "\n\t\t Prueba de listas \n\n";
			cout << "\n\n\t\t MENU \n\n";
			cout << "\n\t i -> Ingresar un elemento en la lista ";
			cout << "\n\t m -> Mostrar elementos de la lista";
			cout << "\n\t o -> Menu de salida";
			cout << "\n\t Ingresar: ";
			cin.getline(opcion,10,'\n');

			if ((opcion[0] != 'm') && (opcion[0] != 'i') && (opcion[0] != 'o'))
			{
				cout << "\n\n Opcion invalida, intente de nuevo\n\n";
				system("pause");
			}

			system("cls");
		}while((opcion[0] != 'm') && (opcion[0] != 'i') && (opcion[0] != 'o'));
		

		switch(opcion[0])
		{
			case 'i':
				
				do
				{
					cout << "\n Digite el numero que desea ingresar en la lista: ";
					cin  >> dato;
					insertarLista(lista,dato);

					cout << "\n\n Desea agregar otro numero?\n";
					cout << "\n s -> si";
					cout << "\n Ingresar: ";
					cin.getline(opcion,10,'\n');
					system("cls");

				} while (opcion[0] == 's' );
				
				system("pause");
				break;	

			case 'm':

				mostrar(lista);
				cout<<endl<<endl;
				system("pause");
		}	
		
		

		do{

			system("cls");

			cout << "\n\t Menu de salida \n\n";

			cout << "\n\t o -> salir";
			cout << "\n\t b -> volver al menu\n";
			cout << "\n\t Ingresar: ";
			cin.getline(opcion,10,'\n');

			if(opcion[0] != 'o' && opcion[0] != 'b')
			{
				cout << "\n\n Solo hay dos opciones pibe\n\n";
				system("pause");
			}

			if (opcion[0] == 'o')
			{
				cout << "\n\t Seguro que quiere salir?\n";
				cout << "\n\t Ingresar: ";
				cin.getline(opcion,10,'\n');
			}

		}while(opcion[0] != 'o' && opcion[0] != 'b');

		fflush(stdin);
		system("cls");
	}while(opcion[0] != 'o');

	cout << "\n\n";

	system("pause");
	return 0;	
}