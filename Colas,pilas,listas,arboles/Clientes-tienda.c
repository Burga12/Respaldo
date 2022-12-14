
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define cls system("cls");


struct Nodo
{
	char nombre[40];
 	char edad[40];
 	char CI[40];
	struct Nodo *siguiente;
};

//variables para apuntar al inicio y al final de la cola
struct Nodo *frente = NULL;
struct Nodo *fin = NULL;

//verificar que un string tenga solo numeros
bool only_numbers(char str[])
{

    for (int i = 0; i<strlen(str); i++)
    {
        if (str[i] < '0' || str[i] > '9' && str[i] != ' ')
            return true;
    }

    return false;
}

//Verificar que un string tenga solo caracteres 
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
	printf("%s",str );	
	while(spaces-- > 0)
			printf(" "); 
}

void spaceAndPrintl(char str[],int spaces) //poner espacios a la izquierda
{
	spaces -= strlen(str);	
	while(spaces-- > 0)
			printf(" ");
	printf("%s",str );
}

//Funcion para guardar los datos en la estructura
void agregarCliente(struct Nodo *nuevo_nodo)
{
	int aux = 0;

	do{

		printf("\n Ingrese el nombre del cliente: " );
		fgets(nuevo_nodo -> nombre,40,stdin); 
		fflush(stdin);
		strtok(nuevo_nodo -> nombre,"\n");//strtok quita el elemento que le pasamos por parametro
						                 // aqui lo usamos para quitar el salto de linea

		if(only_characters(nuevo_nodo -> nombre))
			printf("\n\n No se permite ese caracter \n");

	}while(only_characters(nuevo_nodo -> nombre));

	do{
		printf("\n Ingrese la edad del cliente: ");
		fgets(nuevo_nodo -> edad,40,stdin); 
		fflush(stdin);
		strtok(nuevo_nodo -> edad,"\n");

		aux = atoi(nuevo_nodo -> edad);

		if (only_numbers(nuevo_nodo -> edad) || (aux < 1 || aux > 100))
			printf("\n Ha ingresado un caracter o la edad no es valida \n");

	}while(only_numbers(nuevo_nodo -> edad) || (aux < 1 || aux > 100));
	
	do{
		printf("\n Ingrese la cedula de identidad del cliente: ");
		fgets(nuevo_nodo -> CI,40,stdin); 
		fflush(stdin);//limpiar el buffer para evitar errores
		strtok(nuevo_nodo -> CI,"\n");

		if (only_numbers(nuevo_nodo -> CI) || (strlen(nuevo_nodo -> CI) > 8 || strlen(nuevo_nodo -> CI) < 7))
			printf("\n Ha ingresado un caracter o el numero de cedula es invalido \n");

	}while(only_numbers(nuevo_nodo -> CI) || strlen(nuevo_nodo -> CI) != 8);
}

void agregarElemento()
{
	struct Nodo *nuevo_nodo = malloc(sizeof(struct Nodo));

	agregarCliente(nuevo_nodo); //Igualamos los datos del nodo a los datos ingresados por el ususario
	nuevo_nodo -> siguiente = NULL; 

	//si la cola esta vacia se asigna el nuevo nodo al frente
	if (frente == NULL)
		frente = nuevo_nodo;
	else //en caso de ya estar llena asignamos al siguiente elemento el nuevo nodo
		 fin -> siguiente = nuevo_nodo;

	fin = nuevo_nodo; //guardamos el nodo al final
}


void elimnarElemento(/*char nombre[],char edad[],char CI[]*/){

	//nombre = frente -> nombre;
	//edad   = frente ->   edad;
	//CI     = frente ->     CI;

	struct Nodo *aux = frente;//creamos nuestro axiliar

	if (frente == fin){// Si son iguales es porque solo hay un nodo
		frente = NULL;
		fin = NULL;
	} 

	else 
		frente = frente -> siguiente; // pasamos el siguiente nodo al frente

	free(aux);//eliminamos el nodo
}
/*
void borrar(struct Nodo *frente, char str[])
{
	if (frente == NULL)
		printf("\n\n lista vacia\n");
	else
	{
		struct Nodo *aux_delete = frente;
		struct Nodo *anterior = NULL;

		while((aux_delete!=NULL) && strcasecmp(aux_delete->nombre,str) != 0)
		{
			anterior = aux_delete;
			aux_delete = aux_delete -> siguiente;
		}

		if (aux_delete == NULL)
			printf("\n Elemento a eliminar no existe \n");
		else if (anterior == NULL){

			frente = frente -> siguiente;
			free(aux_delete);

		} else {
			anterior->siguiente = aux_delete -> siguiente;
			free(aux_delete);
		}
	}
}
*/

int main()
{

	
	char opcion[10],cadena_eliminar[30];
	int i = 0,j = 0; //Iteradores
	//struct Cliente cliente;
	bool found = false;

	struct Nodo *aux = NULL;

	printf("\n\t Bienvenido \n\n");
	printf("\n Este programa recopila informacion de los clientes de una tienda\n\n");

	system("pause");

	do{
		cls;

		do{
			printf("\n\t\t .:MENU:. \n\n");

			if (j == 0)
				printf("\n Nota: el simbolo -> se refiera a la tecla que corresponde la opcion \n\n");

			printf(" \n\t a -> Agregar un cliente");
			printf(" \n\t v -> Ver clientes");
			printf(" \n\t e -> Eliminar clientes");
			//printf(" \n\t b -> Eliminar un cliente");
			printf(" \n\t s -> salir");
			printf(" \n\n\t Ingresar: ");

			fgets(opcion,10,stdin);

			if (opcion[0] != 's' && opcion[0] != 'e' && opcion[0] != 'v' && opcion[0] != 'a')
			{
				printf("\n\n Opcion invalida. Intente de nuevo \n\n");
				system("pause");
			}
			cls;
		}while(opcion[0] != 's' && opcion[0] != 'e' && opcion[0] != 'v' && opcion[0] != 'a');
		

		switch(opcion[0])
		{
			case 'a':

				do{
					i++;
					printf("\n\t Agregando cliente(s) nuevo(s) \n\n");
					agregarElemento();

					printf("\n Desea agregar otro cliente?");
					printf("\n s -> si");
					printf("\n Otro -> no");
					printf("\n Ingresar: ");
					fgets(opcion,10,stdin);
					cls;
				}while(opcion[0] == 's');

				printf("\n\n");

				break;


			case 'e':	

				if (frente == NULL)
				{
					printf("\n\n Aun no ha guardado ningun cliente \n\n");
					break;
				}

				while(frente != NULL)
				{
					elimnarElemento();
				}
				
				printf("\n Se han eliminado todos los clientes correctamente \n\n");
				break;

			case 'v':
				
				if (frente == NULL)
				{
					printf("\n\n Aun no ha guardado ningun cliente \n\n");
					break;
				}

				aux = frente;

				printf("\n\t\t Clientes Registrados \n\n");

				printf("\t     | ");
				spaceAndPrintr("Nombre",16); printf(      " |  ");
				spaceAndPrintr("Edad",6);	 printf(   "| ");	
				spaceAndPrintr("Cedula",7); 

				printf("\n");
				i = 1;

				while(aux != NULL)
				{

					//cliente = aux -> cliente;
					printf("\n\t %d # | ",i);
					spaceAndPrintr(aux -> nombre,16); printf(     " |  ");
					spaceAndPrintr(aux -> edad,6);	   printf(   "| ");	
					spaceAndPrintr(aux -> CI,7);

					//printf("\n%s",cliente.nombre);
	
					//printf("\n%s",cliente.edad);	
	
					//printf("\n%s",cliente.CI);

					fflush(stdin);
					i++;
					aux = aux -> siguiente;
					
				}

				printf("\n\n");

				break;

		/*	case 'b':
				found = false;

				do{

					aux = frente;

					printf("\n\t\t Clientes Registrados \n\n");

					printf("\t     | ");
					spaceAndPrintr("Nombre",16); printf(      " |  ");
					spaceAndPrintr("Edad",6);	 printf(   "| ");	
					spaceAndPrintr("Cedula",7); 

					printf("\n");
					i = 1;

					while(aux != NULL)
					{

						//cliente = aux -> cliente;
						printf("\n\t %d # | ",i);
						spaceAndPrintr(aux -> nombre,16); printf(     " |  ");
						spaceAndPrintr(aux -> edad,6);	   printf(   "| ");	
						spaceAndPrintr(aux -> CI,7);

						//printf("\n%s",cliente.nombre);
	
						//printf("\n%s",cliente.edad);	
	
						//printf("\n%s",cliente.CI);

						fflush(stdin);
						i++;
						aux = aux -> siguiente;
					
					}

					printf("\n\n Ingrese exactamente el nombre del cliente a eliminar: ");
					fgets(cadena_eliminar,30,stdin);
					strtok(cadena_eliminar,"\n");//quitamos el salto de linea

					aux = frente;

					while(aux != NULL)
					{

						if (strcasecmp(cadena_eliminar,aux->nombre) == 0)
						{
							found = true;
							break;
						}

						aux = aux -> siguiente;

					}

					if (!found)
					{
						printf("\n\n Nombre incorrecto \n");
						printf("\n Desea ingresar el nombre de nuevo?");
						printf("\n s -> si");
						printf("\n otro -> salir");
						printf("\n Ingresar: ");
						fgets(opcion,10,stdin);
						strtok(opcion,"\n");

					} else {

						printf("\n Seguro que quiere eliminarlo?");
						printf("\n s -> si");
						printf("\n otro -> no");
						printf("\n Ingresar: ");
						fgets(opcion,10,stdin);
						strtok(opcion,"\n");

						if (opcion[0] == 's')
						{
							borrar(frente,cadena_eliminar);

							printf("\n Desea eliminar otro contacto?");
							printf("\n s -> si");
							printf("\n otro -> salir");
							printf("\n Ingresar: ");
							fgets(opcion,10,stdin);
							strtok(opcion,"\n");
						}
					}

				}while(opcion[0] == 's');
			*/	
		}

		if (opcion[0] != 's')
			system("pause");

		do{

			cls;

			printf("\n\t Menu de salida \n\n");

			printf("\n\t s -> salir");
			printf("\n\t m -> volver al menu\n");
			printf("\n\t Ingresar: ");
			fgets(opcion,10,stdin);

			if(opcion[0] != 'm' && opcion[0] != 's')
			{
				printf("\n\n Solo hay dos opciones pibe\n\n");
				system("pause");
			}

			if (opcion[0] == 's')
			{
				printf("\n\t Seguro que quiere salir?\n\n\t s -> si \n\t m -> volver al menu \n");
				printf("\n\t Ingresar: ");
				fgets(opcion,10,stdin);
			}
		}while(opcion[0] != 'm' && opcion[0] != 's');
		j++;
	}while(opcion[0] == 'm');

	cls;
	printf( "Gracias por utilizar nuestro programa\n\n");
	system("pause");

	return 0;
	
}