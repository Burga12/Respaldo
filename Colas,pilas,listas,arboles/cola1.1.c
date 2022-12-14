#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#define cls system("cls");

struct Nodo{

	int dato;
	struct Nodo *siguiente;
};

struct Nodo *raiz = NULL;
struct Nodo *fondo = NULL;

	//variable de uso global
	int final = 0;
		

void gotoxy(int x, int y)
{
	HANDLE helper;
	COORD position;

	helper = GetStdHandle(STD_OUTPUT_HANDLE);

	position.X = x;
	position.Y = y;

	SetConsoleCursorPosition(helper,position);
}

bool hasAChar(char* strStart, char* strEnd) // Para validar que una
                                            // cadena no tenga caracteres
{
    char* ptr = strStart;
    if (*ptr == '-')
        ptr++;
    while (ptr <= strEnd && *ptr != '\0')
    {
        if ((*ptr < 48 || *ptr > 57))
            return true;
        if (*(++ptr) == '\n')
            *ptr = '\0';
    }

    return false;
}

int validInt() // Te retorna un int.
               // La uso para no validar cada
               // que necesitamos ingresar algo
{
    char str[10];

    fgets(str,10,stdin);
    strtok(str,"\n");

    while (hasAChar(str, str + 10))
    {
        gotoxy(2,8); printf("No puede usar caracteres. Intente de nuevo: ");
        fgets(str,10,stdin);
    	strtok(str,"\n");
    }

    return (int)strtol(str, NULL, 10);
}

void insertar(int x)
{
	struct Nodo *nuevo_nodo = malloc(sizeof(struct Nodo));

	nuevo_nodo -> dato = x;
	nuevo_nodo -> siguiente = NULL;

	if (raiz == NULL)
		raiz = nuevo_nodo;
	else
		fondo -> siguiente = nuevo_nodo;

	fondo = nuevo_nodo;
}

int extraer()
{
	struct Nodo *aux = raiz;
	int x = aux -> dato;

	if (raiz != NULL)
	{
		if (raiz == fondo)
		{
			raiz = NULL;
			fondo = NULL;
		}
		else
		{
			raiz = raiz -> siguiente;
		}
	} else {
		return -1;
		printf("\n\n Lista vacia \n\n");
	}

	free(aux);
	return x;	
}

/*
void imprimir()
{
	struct Nodo *aux = raiz;
	
	printf("\n\n Elementos ingresados en la cola: ");
	while(aux != NULL)
	{
		printf(" %i ",(*aux).dato);
		aux = aux -> siguiente;
	}
}
*/


void liberar()
{
	struct Nodo *aux = raiz;
	struct Nodo *aux2;

	while(aux != NULL){
		aux2 = aux;
		aux  = aux -> siguiente;
		free(aux2);
	}
	
	raiz = NULL;
	fondo = NULL;
}

void dibujarCuadro(int x1,int y1,int x2,int y2){//10 4 10 8
	int i;
	
    for (i=x1;i<x2;i++){
		gotoxy(i,y1); printf("\304"); //linea horizontal superior
		gotoxy(i,y2); printf("\304"); //linea horizontal inferior
    }

    for (i=y1;i<y2;i++){
		gotoxy(x1,i); printf("\263"); //linea vertical izquierda
		gotoxy(x2,i); printf("\263"); //linea vertical derecha
	}
	
    gotoxy(x1,y1); printf("\332"); 
    gotoxy(x1,y2); printf("\300");
    gotoxy(x2,y1); printf("\277");
    gotoxy(x2,y2); printf("\331");
}

//funcion para determinar las cifras de una numero
int cifras(int n)
{	
	int aux = n;//lo pongo en una variable auxiliar para no afectar la original
	int cifra = 0; //almacenara el numero de cifras

	while(aux >= 1)
	{
		aux /= 10;
		cifra++;
		//printf("\n %d",aux);

		if (aux == 1)
		{
			cifra++;
			break;
		}
	}

	//printf("\n %d",cifra);
	return cifra;
}

void mostrarG(int i,int j,int n)
{

	int nAux = 0;
	struct Nodo *aux = raiz;

	gotoxy(i,j);
	//determinamos el lugar donde apareceran los numeros

	
	while(aux != NULL)
	{
		
		printf("%d",aux->dato);
		i += (cifras(aux -> dato)) + (strlen(" -> "));
		aux = aux -> siguiente;

		// si no es el final de la cola muestra el simbolo -> 
		if (aux != NULL)
		{
			printf(" -> ");
			//printf("\n%d\n%d\n",i,cifras(aux -> dato));
		}

		
		
		if (i >= n && aux != NULL)
		{
			j += 2;
			i  = 2;
			gotoxy(i,j);
		}
	}	
}

int main(int argc, char const *argv[])
{	

	char opcion[10];

	int i,j,cont = 1;
	int number;
	//valores iniciales
	i  =  9;
	j  =  7;


	do{

		do{
			cls;
			dibujarCuadro(0,0,78,24); //SE DIBUJA EL CUADRO PRINCIPAL
			dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
			gotoxy(30,2);
			printf(" Menu de Colas");

			dibujarCuadro(1,4,28,22);
			dibujarCuadro(2,5,27,7);
			gotoxy(11,6); printf("Opciones");
			gotoxy(3,10); printf("a -> Agregar un Elemento");
			gotoxy(3,12); printf("e -> Extraer un Elemento");
			gotoxy(3,14); printf("l -> Limpiar la Cola");
			gotoxy(3,16); printf("v -> Ver la Cola");
			gotoxy(3,18); printf("s -> Salir");

			gotoxy(3,20); printf("Ingrese una opcion: ");
			fgets(opcion,10,stdin);

			if ((opcion[0] != 's' && opcion[0] != 'a' &&   opcion[0] != 'e' && opcion[0] != 'l') 
			   &&  (opcion[0] != 'v'))
			{
				cls;
				printf("\n Opcion Incorrecta. Intente de nuevo \n\n\n");
				system("pause");
			}

		}while((opcion[0] != 's' && opcion[0] != 'a' &&   opcion[0] != 'e' && opcion[0] != 'l') 
			                                         &&  (opcion[0] != 'v'));

		switch(opcion[0])
		{

			case 'a':

				do{

					cls;

					dibujarCuadro(0,0,78,24); 
					dibujarCuadro(1,1,77,3); 
					gotoxy(25,2);printf("Agregar elemento a la cola"); 
					gotoxy(2,6); printf("Ingrese el elemento a guardar: ");
					number = validInt();
					cls;
					dibujarCuadro(0,0,78,24); 
					dibujarCuadro(1,1,77,3);
					gotoxy(25,2);printf("Agregar elemento a la cola");  
					gotoxy(2,6); printf("Nuevo elemento agregado correctamente");

					insertar(number);
						
					mostrarG(2,8,41);

					//gotoxy(2,9);printf("Elemento %i guardado correctamente",raiz->dato);
				
					do{
						fflush(stdin);

						gotoxy(50,6);printf("Desea hacerlo de nuevo?");
						gotoxy(50,9); printf("s -> si");
						gotoxy(50,10); printf("n -> no");
						gotoxy(50,12); printf("Ingresar: ");
						fgets(opcion,10,stdin);
						
						if (opcion[0] != 'n' && opcion[0] != 's')
						{
							cls;
							printf("\n\n Opcion Incorrecta intente de nuevo\n\n");
							system("pause");
							cls;
							dibujarCuadro(0,0,78,24); 
							dibujarCuadro(1,1,77,3);
							gotoxy(15,2);printf("Agregar elemento a la cola"); 
						}

					}while(opcion[0] != 'n' && opcion[0] != 's');
					
				}while(opcion[0] == 's');

				gotoxy(30,23);system("pause");
				break;

			case 'e':

				do{

					cls;

					if (raiz == NULL)
					{
						printf("\n Cola vacia \n\n");
						system("pause");
						opcion[0] = 'n';
						break;

					} else {

						do{

							dibujarCuadro(0,0,78,24); 
							dibujarCuadro(1,1,77,3);

							gotoxy(30,2);printf("Extraer un elemento");
							gotoxy(50,6);printf("Seguro que quiere extraer?");
							gotoxy(50,9); printf("s -> si");
							gotoxy(50,10); printf("n -> no");
							gotoxy(50,12); printf("Ingresar: ");
							fgets(opcion,10,stdin);
						
						if (opcion[0] != 'n' && opcion[0] != 's')
						{
							cls;
							printf("\n\n Opcion Incorrecta intente de nuevo\n\n");
							system("pause");
						}

						}while(opcion[0] != 'n' && opcion[0] != 's');

						if (opcion[0] == 'n')
							break;
					}

					cls;
					dibujarCuadro(0,0,78,24); 
					dibujarCuadro(1,1,77,3);
					gotoxy(30,2);printf("Extraer un elemento");

					gotoxy(2,8); printf("Elemento extraido: %d",extraer());
					gotoxy(2,10); printf("Ahora la cola queda de esta forma");

					mostrarG(2,12,41);

					do{
						fflush(stdin);

						gotoxy(50,6);printf("Desea hacerlo de nuevo?");
						gotoxy(50,9); printf("s -> si");
						gotoxy(50,10); printf("n -> no");
						gotoxy(50,12); printf("Ingresar: ");
						fgets(opcion,10,stdin);
						
						if (opcion[0] != 'n' && opcion[0] != 's')
						{
							cls;
							printf("\n\n Opcion Incorrecta intente de nuevo\n\n");
							system("pause");
							cls;
							dibujarCuadro(0,0,78,24); 
							dibujarCuadro(1,1,77,3);
							gotoxy(30,2);printf("Extraer un elemento");
						}

					}while(opcion[0] != 'n' && opcion[0] != 's');

				}while(opcion[0] == 's');

				break;

			case 'l':

				cls;
				if (raiz == NULL)
					{
						printf("\n Cola vacia \n\n");
						system("pause");
						opcion[0] = 'n';
						break;

					} else {

						do{

							dibujarCuadro(0,0,78,24); 
							dibujarCuadro(1,1,77,3);

							gotoxy(30,2);printf("limpiar cola");
							gotoxy(43,6);printf("Seguro que quiere limpiar la cola?");
							gotoxy(43,9); printf("s -> si");
							gotoxy(43,10); printf("n -> no");
							gotoxy(43,12); printf("Ingresar: ");
							fgets(opcion,10,stdin);
						
						if (opcion[0] != 'n' && opcion[0] != 's')
						{
							cls;
							printf("\n\n Opcion Incorrecta intente de nuevo\n\n");
							system("pause");
						}

						}while(opcion[0] != 'n' && opcion[0] != 's');

						if (opcion[0] == 'n')
							break;
					}

					cls;
					printf("\n Limpiando cola");
					for (int i = 0; i < 3; i++)
					{
						printf(".");
						Sleep(1);
					}
					liberar();

					printf("\n\n Se ha vaciado la cola satisfactoriamente \n\n");
					system("pause");
					opcion[0] = 'n';
					cls;
					break;

			case 'v':

				cls;
				if (raiz == NULL)
				{
					printf("\n Cola vacia \n\n");
					system("pause");
					opcion[0] = 'n';
					break;
				}
				
				dibujarCuadro(0,0,78,24); 
				dibujarCuadro(1,1,77,3);
				gotoxy(2,6); printf("Elementos en la cola: ");
				mostrarG(2,8,58);
				gotoxy(36,2);printf("Ver cola");
				gotoxy(30,23);system("pause");


		}

		if (opcion[0] == 's')
		{
			cls;

			printf("\n Seguro que quiere salir?");
			printf("\n s -> si");
			printf("\n otro -> no (volvera al menu)");
			printf("\n Ingresar: ");
			fgets(opcion,10,stdin);
		}

	}while(opcion[0] != 's');

	
	cls;
	gotoxy(2,23); system("pause");
	//imprimir();
	return 0;
}