/*Hacer una matriz que pida al ususario el numero de filas y columnas,
llenarla de numeros aleatorios, copiar el contenido a otra matriz y por
ultimo mostrarla en pantalla*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){

	int a[100][100],b[100][100],c,f;
	srand(time(NULL));

	cout << "\tCopiar elementos de una matriz en otra matriz\n";

	cout << "\n Ingrese el tamano de la matriz\n\n";
	cout << "\tColumna: "; cin>>c; 
	cout << "\tFilas: "; cin>>f;
	cout << "\n La matriz se llenara aleatoriamente\n\n";
	system("\npause");

	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			//llenar aleatoriamente con numeros entre 1-100
			a[i][j] = 1+rand()%(101-1);
		}
	}

	//Guardar la matriz en otra
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			b[i][j] = a[i][j];
		}
	}
	cout<<endl;
	
	//mostrar
	cout<<"\nElementos en Matriz 1\n"<<endl;
	for (int i = 0; i<f;i++){
		for (int j=0;j<c;j++){
			if (j != c-1) cout <<a[i][j]<<"-";
			else cout << a[i][j]; //Write the last digit whitout -
		}
		cout<<endl;
	}

	//mostrar
	cout<<"\nElementos en Matriz 2\n"<<endl;
	for (int i = 0; i<f;i++){
		for (int j=0;j<c;j++){
			if (j != c-1) cout <<b[i][j]<<"-";
			else cout << b[i][j]; //Write the last digit whitout -
		}
		cout<<endl;
	}


	cout<<endl;
	system("pause");
	return 0;
}