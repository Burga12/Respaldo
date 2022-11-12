/*Ejercicio 2: Hacer un programa que guarde datos de clientes de un banco, los almacene
en cola, y por ultimo muestre los clientes en el orden correcto.*/

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Cliente
{
 	char nombre[40];
 	char edad[40];
 	char CI[40];
};

struct Nodo
{
	Cliente cliente;
	Nodo * siguiente;
};

bool only_numbers(char str[])
{

    for (int i = 0; i<strlen(str); i++)
    {
        if (str[i] < '0' || str[i] > '9' && str[i] != ' ')
            return true;
    }

    return false;
}


bool only_characters(char str[])
{

    for (int i = 0; i<strlen(str); i++)
    {
        if (str[i] < 'A' || str[i] > 'z')
            if (str[i] != ' ')
                return true;
    }

    return false;
}

void spaceAndPrintr(char str[],int spaces) //poner espacios a la derecha
{
	spaces -= strlen(str);	
	cout << str;	
	while(spaces-- > 0)
			cout << " ";
}

void spaceAndPrintl(char str[],int spaces) //poner espacios a la izquierda
{
	spaces -= strlen(str);	
	while(spaces-- > 0)
			cout << " ";
	cout << str;
}

void agregarCliente(Cliente &c)
{
	int aux = 0;

	do{

		cout << "\n Ingrese el nombre del cliente: ";
		cin.getline(c.nombre,40,'\n'); fflush(stdin);

		if(only_characters(c.nombre))
			cout << "\n\n No se permite ese caracter \n";

	}while(only_characters(c.nombre));

	do{
		cout << "\n Ingrese la edad del cliente: ";
		cin.getline(c.edad,40,'\n'); fflush(stdin);

		aux = atoi(c.edad);

		if (only_numbers(c.edad) || (aux < 1 || aux > 100))
			cout << "\n Ha ingresado un caracter o la edad no es valida \n";

	}while(only_numbers(c.edad) || (aux < 1 || aux > 100));
	
	do{
		cout << "\n Ingrese la cedula de identidad del cliente: ";
		cin.getline(c.CI,40,'\n'); fflush(stdin);//limpiar el buffer para evitar errores

		if (only_numbers(c.CI) || strlen(c.CI) != 8)
			cout << "\n Ha ingresado un caracter o el numero de cedula es invalido \n";

	}while(only_numbers(c.CI) || strlen(c.CI) != 8);	
}


void agregarElemento(Nodo *&frente, Nodo *&fin, Cliente c)
{
	Nodo *nuevo_nodo = new Nodo();//Reservamos memoria para el nodo

	nuevo_nodo -> cliente   =    c; //Igualamos los datos del nodo a los datos ingresados por el ususario
	nuevo_nodo -> siguiente = NULL; 

	//si la cola esta vacia se asigna el nuevo nodo al frente
	if (frente == NULL)
		frente = nuevo_nodo;
	else //en caso de ya estar llena asignamos al siguiente elemento el nuevo nodo
		 fin -> siguiente = nuevo_nodo;

	fin = nuevo_nodo; //guardamos el nodo al final
}

void elimnarElemento(Nodo *&frente, Nodo *&fin, Cliente &c){

	c = frente -> cliente;
	Nodo *aux = frente;//creamos nuestro axiliar

	if (frente == fin){// Si son iguales es porque solo hay un nodo
		frente = NULL;
		fin = NULL;
	} 

	else 
		frente = frente -> siguiente; // pasamos el siguiente nodo al frente

	delete aux;//eliminamos el nodo
}

int main()
{

	Nodo *frente = NULL;
	Nodo *fin = NULL;
	char opcion[10];
	int i = 0; //Iterador
	Cliente cliente;

	cout << "\n\t Bienvenido \n\n";
	cout << "\n Este programa recopila informacion de los clientes de una tienda\n\n";

	system("pause");

	do{
		system("cls");

		do{
			cout << "\n\t\t .:MENU:. \n\n";

			if (i == 0)
				cout << "\n Nota: el simbolo -> se refiera a la tecla que corresponde la opcion \n\n";

			cout << "\n\t a -> Agregar un cliente";
			cout << "\n\t v -> Ver clientes";
			cout << "\n\t e -> Eliminar clientes";
			cout << "\n\t s -> salir";
			cout << "\n\n\t Ingresar: ";
			cin.getline(opcion,10,'\n');

			if (opcion[0] != 's' && opcion[0] != 'e' && opcion[0] != 'v' && opcion[0] != 'a' )
			{
				cout << "\n\n Opcion invalida. Intente de nuevo \n\n";
				system("pause");
			}
			system("cls");
		}while(opcion[0] != 's' && opcion[0] != 'e' && opcion[0] != 'v' && opcion[0] != 'a' );
		

		switch(opcion[0])
		{
			case 'a':

				do{
					i++;
					cout << "\n\t Agregando cliente(s) nuevo(s) \n\n";
					agregarCliente(cliente);
					agregarElemento(frente,fin,cliente);

					cout << "\n Desea agregar otro cliente?";
					cout << "\n s -> si";
					cout << "\n Otro -> no";
					cout << "\n Ingresar: ";
					cin.getline(opcion,10,'\n');
					system("cls");
				}while(opcion[0] == 's');

				cout << "\n\n";

				break;


			case 'e':	

				if (frente == NULL)
				{
					cout << "\n\n Aun no ha guardado ningun cliente \n\n";
					break;
				}

				while(frente != NULL)
				{
					elimnarElemento(frente,fin,cliente);
				}
				
				break;

			case 'v':
				
				if (frente == NULL)
				{
					cout << "\n\n Aun no ha guardado ningun cliente \n\n";
					break;
				}

				Nodo* aux = frente;

				cout << "\n\t\t Clientes Registrados \n\n";

				cout << "\t    | ";
				spaceAndPrintr("Nombre",16); cout <<      " |  ";
				spaceAndPrintr("Edad",6);	 cout <<   "| ";	
				spaceAndPrintr("Cedula",7); 

				cout << endl;
				i = 1;

				

				while(aux != NULL)
				{

					cliente = aux -> cliente;
					//elimnarElemento(frente,fin,cliente);
					cout << "\n\t "<< i <<"# | ";
					spaceAndPrintr(cliente.nombre,16); cout <<     " |  ";
					spaceAndPrintr(cliente.edad,6);	   cout <<   "| ";	
					spaceAndPrintr(cliente.CI,7);
					fflush(stdin);
					i++;
					aux = aux -> siguiente;
					
				}

				cout << "\n\n";

				break;

		}

		if (opcion[0] != 's')
			system("pause");

		do{

			system("cls");

			cout << "\n\t Menu de salida \n\n";

			cout << "\n\t s -> salir";
			cout << "\n\t m -> volver al menu\n";
			cout << "\n\t Ingresar: ";
			cin.getline(opcion,10,'\n');

			if(opcion[0] != 'm' && opcion[0] != 's')
			{
				cout << "\n\n Solo hay dos opciones pibe\n\n";
				system("pause");
			}

			if (opcion[0] == 's')
			{
				cout << "\n\t Seguro que quiere salir?\n";
				cout << "\n\t Ingresar: ";
				cin.getline(opcion,10,'\n');
			}
		}while(opcion[0] != 'm' && opcion[0] != 's');
		
	}while(opcion[0] == 'm');

	system("cls");
	cout << "Gracias por ultilzar el programa\n\n";
	system("pause");

	return 0;
	
}