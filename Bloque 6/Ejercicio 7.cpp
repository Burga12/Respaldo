
//Determinar si una matriz es simetrica

//Una matriz es simetrica si, y solo si, es igual a su igual transpuesta
#include <iostream>
#include <stdlib.h>

using namespace std;

bool simetric(int x[][100],int y,int z);
void mostrarMatriz(int x[][100],int y,int z);
void mostrarMatrizTranspuesta(int x[][100],int y,int z);

int main() {

	int nColumns = 0,nRows = 0,matriz[100][100];
	bool confirm = 0;

	cout << "\n MATRIZ SIMETRICA O NO SIMETRICA\n\n";
	cout << "\n\tIngrese el numero de columnas: ";cin>>nColumns;
	cout << "\n\tIngrese el numero de Filas: ";cin>>nRows;

	//rellenando
	cout << "\n Rellene la matriz\n\n";
	for(int i = 0;i<nRows;i++){
		for(int j = 0;j<nColumns;j++){
			printf("\t Fila[%d]-Columnas[%d]: ",i,j);cin>>matriz[i][j];
		}
	}
	
	cout<<"\nMatriz: \n\n"; mostrarMatriz(matriz,nRows,nColumns);
	cout<<"\nMatriz Transpuesta: \n\n"; mostrarMatrizTranspuesta(matriz,nRows,nColumns);

	if (simetric(matriz,nRows,nColumns)) printf("\n La matriz es simetrica");
	else printf("\n La matriz no es simetrica");

	cout<<endl<<endl;
	system("pause");
	return 0;

}

//determinar si la matriz es simetrica

bool simetric(int x[][100],int y,int z){

	//y = numero de filas
	//z = numero de columns

	if (y==z){

		for(int i = 0; i < y;i++){
			for (int j = 0; j < z;j++){
				
				//si un solo digito es distinto
			   //no es una matriz simetrica
				if(x[i][j]!=x[j][i]) return false;
			}
		}

	} else {
		return false;
	}

	return true;
}

void mostrarMatriz(int x[][100],int y,int z){

	//y = numero de filas
	//z = numero de columns

	for (int i = 0; i<y;i++){
		printf(" ");
		for (int j=0;j<z;j++){

			//escribe el ultimo digito sin el guion
			if(j != y-1) printf("%d - ",x[i][j]);
			else printf("%d",x[i][j]);
		}

		printf("\n");
	}
}

void mostrarMatrizTranspuesta(int x[][100],int y,int z){

	//y = numero de filas
	//z = numero de columns

	for (int i = 0; i<y;i++){
		printf(" ");
		for (int j=0;j<z;j++){

			//escribe el ultimo digito sin el guion
			if(j != y-1) printf("%d - ",x[j][i]);
			else printf("%d",x[j][i]);
		}

		printf("\n");
	}
}