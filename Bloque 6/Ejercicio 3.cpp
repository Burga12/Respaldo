//Copiar elementos de una matriz en otra matriz

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

	int a[100][100],b[100][100],t; //t = Tamaño de la matriz
								  //a = matriz 1 (o matriz a)
								  //b = matriz 2 (o matriz b)	

	cout << "\tCopiar elementos de una matriz en otra matriz\n";
	cout << "\nIngrese el tamano de las matrices(Columna y Filas por igual): ";cin>>t;

	cout << "\nIngrese los elementos de la matriz"<<endl;

	cout<<endl;
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			cout << "Fila "<<i+1<<"/"<<t<<" Columna "<<j+1<<"/"<<t<<": ";cin>>a[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	//Guardar la matriz en otra
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			b[i][j] = a[i][j];
		}
	}
	cout<<endl;

	//mostrar
	cout<<"\nElementos en Matriz copiado de la primera matriz ingresada"<<endl;
	for (int i = 0; i<t;i++){
		for (int j=0;j<t;j++){

			//Write the last digit whitout -
			if (j != t-1) cout <<b[i][j]<<"-";
			else cout << b[i][j]; 
		}
		cout<<endl;
	}

	return 0;
}