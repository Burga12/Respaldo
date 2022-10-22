//suma de matrices

#include <iostream>
#include <stdlib.h>

using namespace std;


void llenarYSumar(int x[][100]);
void mostrarMatriz(int x[][100]);
bool continuar();

int nRows,nColumns,repeat=1,suma=0;
int matrizA[100][100];

int main() {

	system("color 05");

	do{
		system("cls");
		cout<<"\n\t Suma de Matrices \n";
		cout<<"\n\n\t Matriz "<<repeat<<"\n\n";
		printf("\n Ingrese el numero de filas: ");cin>>nRows;
		printf("\n Ingrese el numero de columnas: ");cin>>nColumns;

		//llenar
		llenarYSumar(matrizA);

		mostrarMatriz(matrizA);
		

	}while(continuar());

	system("cls");
	cout<<"\n\tSuma total de todos los elementos de las matrices ingresadas: "<<suma;

	
	cout<<endl<<endl;
	system("pause");
	return 0;
}

void llenarYSumar(int x[][100]){

	printf("\n\n");
	for(int i = 0;i<nRows;i++){
		for(int j = 0;j<nColumns;j++){
			printf(" Ingresar  Fila[%d]/Columna[%d]: ",i+1,j+1);
			cin>>x[i][j];
			suma+=x[i][j];
		}
		printf("\n");
	}

}

void mostrarMatriz(int x[][100]){

	cout<<"Matriz: "<<repeat<<endl<<endl;
	for (int i = 0; i<nRows;i++){
		printf(" ");
		for (int j=0;j<nColumns;j++){

			if(j != nColumns-1) printf("%d - ",x[i][j]);
			else printf("%d",x[i][j]);
		}

		printf("\n");
	}
	repeat++;
}

bool continuar(){
	
	int init=0;

	printf("\n\t Desea sumarle otra matriz?");
	printf("\n\t 1: Si");
	printf("\n\t Otro: Salir");
	printf("\n\t Ingresar: ");cin>>init;

	if (init == 1 ) return true;
	else return false;
	
}
