#include <stdio.h>
#include <stdlib.h>


struct Nodo
{
	int dato;
	struct Nodo* siguiente;
}Nodo;



//esta funcion es para guardar un elemento en la cola
void push(struct Nodo *frente, struct Nodo *fin, int n)
{
	struct Nodo* Nuevo_nodo =  malloc(sizeof(struct Nodo));
	/* Ok aca arriba lo que estamos haciendo es reservar memorio para el nodo
	   la funcion malloc() hace todo el proceso, nosotros solo le damos el tipo de dato,
	   en este caso es un Nodo que nosotros creamos. lo que ves (Nodo *) es para que la fucion
	   sepa que se creara memorio para un nodo. por ejemplo si quisieramos que fuera para un entero
	   seria  (int) malloc(int);. 
	 */

	Nuevo_nodo -> dato = n;
	//aca estamos diciendo que el valor del dato de nuestro nuevo nodo es igual al valor
	//que le estemos asigando. ejemlplo si enviamos el numero 10, se guardara 10 en ese nodo

	Nuevo_nodo -> siguiente = NULL;
	//aca hacemos que el puntero de nuestro nodo apunte a NULL, para evitar que apunte a
	// una posicion random

	//aqui debajo determinamos si la cola esta llena. en caso de que el frente este lleno
	// es porque esta vacia. mas adelante en el main esta la explicacion de que es el frente y el fin
	// Por si acaso
	if (frente == NULL)
		frente = Nuevo_nodo;
		//guardamos el nodo en el frente de la cola. ese sera nuestro primer valor
	else
		frente -> siguiente = Nuevo_nodo;
		// en caso de estar llena la cola, guardamos el elemento en la siguiente posicion de la cola
		// esto se logro ya que el puntero siguiente siempre apuntara al siguiente elemento de la cola
		// por eso su nomnbre

	fin = Nuevo_nodo;
	//por ultimo guardamos el elemento al final de la cola
	// se deja asi sin mas porque cada vez que se ingrese un nuevo elemento siempre sera el ultimo


}	


//esta funcion es para tomar y eliminar un elemento de la cola
		//NOTA: lo hago junto porque no habra mucho tiempo para defender tantas funciones
//Como notas esta vez le pasamos el dato (la n), por referencia, o sea, le pasamos a la funcion
// la posicion del dato, ya que siempre estara cambiando 
void pop(struct Nodo *frente, struct Nodo *fin,int n)
{	
	n = frente -> dato;
	//aca hacemos que el dato sea igual al dato que esta en el nodo
	// o sea si el primero elemento (el elemento en el frente de la cola xd) era 10, n sera igual a 10

	struct Nodo* aux = frente;
	//Creamos un axiliar para eliminar el nodo sin afectar a los punteros frente y fin

	//aca determinamos si ya queda un solo elemento en la cola. esto lo logramos
	// comparando si el frente es igual al fin, ya que si son iguales es porque estan
	// apuntando a un solo elemento (O sea a un mismo nodo)
	if(frente == fin ){
		frente = NULL;
		fin = NULL;

	} else
		frente = frente -> siguiente;
		//en caso de que aun haya mas de un elemento, pasamos el frente al
		//siguiente elemento de la cola
		// si en la cola estaban los numeros 10,11,12, entonces el frente pasara de ser 10
		// a ser 11, y asi dependiendo de cuantos elementos tenga la cola

	free(aux);
	//la funcioin free sir ve para eliminar la memorio reservado del elemento que le enviamos por
	// parametro

}	
int main()
{
	struct Nodo* frente = NULL;
	struct Nodo* fin = NULL;
	//estos punteros son los que nos ayudaran a determinar cual es el primer
	// elemento de la cola y cual es el ultimo. el frente siempre apuntara al
	// primer elemento y el fin al uiltimo elemento respectivamente

	//A partir de aqui solo hace una operacion sencilla de pedir un numero
	// y guardarlo en el nodo para no complicarnos

	int n;

	printf("\n\t Programa de prueba de colas \n\n");
	printf("\n Ingrese un numero: ");
	scanf("%d",n);

	//creamos y guardamos el dato en un nodo
	push(frente,fin,n);

	//mostramos el dato
	printf("\n Numero ingresado: %d",frente -> dato);

	//eliminamos el nodo
	pop(frente,fin,n);

	if (frente == NULL)
		printf("\n\n  Nodo elimnado correctamente\n\n");
	else 
		printf("\n\n pinchre programa asqueroso no sirvio\n\n");


	system("pause");
	return 0;
}