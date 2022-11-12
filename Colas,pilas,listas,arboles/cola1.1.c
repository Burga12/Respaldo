#include <stdio.h>

struct Dato
{
	int dato;
}Dato;

struct NodoDato
{
	Dato numero;
	struct NodoDato* siguiente;
}NodoDato;

struct Cola
{
	NodoDato* frente;
	NodoDato* fin;
}Cola;

NodoDato* crearCola(Dato n);