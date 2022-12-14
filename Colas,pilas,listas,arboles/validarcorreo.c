#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool validarCorreo(char str[])
{
	char aux[20];
	bool confirm = false;

	//determinar que tenga una @
	for (int i = 0; i < strlen(str); i++)
	{	

		//comparamos si el arroba existe en la cadena y tambien
		//comparamos si el arroba no esta en la ultima posicion de la cadena
		if (str[i] == '@' && i != (strlen(str) - 2))// -2 porque tiene un salto de linea
		{
			confirm = true;
		} 
	}

	// si confirm es false significa que la cadena no tiene arroba
	if (confirm)
	{
		strcpy(aux,strtok(str,"@"));//separamos la cadena del arroba
		strcpy(aux,strtok(NULL,"\n"));//ahora copiamos la cadena y le quitamos el salto de linea

		if (
			(strcasecmp(aux,"gmail.com")   != 0)  && (strcasecmp(aux,"hotmail.com") != 0 ) && 
			(strcasecmp(aux,"hotmail.es")  != 0)  && (strcasecmp(aux,"outlook.es" ) != 0 ) &&
			(strcasecmp(aux,"outlook.com") != 0)  
	   		)
		{
			return false;
		}

	} else
		return false;

	

	return true;
		
}


int main(){


	char culo[100];
	char auxiliar[100];//esta nos va ayudar como auxiliar para que no se dañe la cadena en ejecucion
						// ya que cambiamos la cadena para validar

	do{

		printf("\n Ingrese un correo: ");
		fgets(culo,100,stdin);
		strcpy(auxiliar,culo);//copiamos la cadena para validar
		if (!validarCorreo(auxiliar))
			printf("\n Correo invalido intente de nuevo\n\n");

		system("pause");

	}while(!validarCorreo(culo));


	printf("\n %s es un correo valido",culo);
	return 0;
	
}