//Producto de dos matrices 3x3

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

	int matriz1[3][3];
	int matriz2[3][3];

	int mul = 1;

	cout<<"\n\n Producto de 2 matrices 3x3\n\n";

	cout << "\n Rellene la matriz 1\n\n";
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			printf("\t Fila[%d]-Columnas[%d]: ",i,j);cin>>matriz1[i][j];
			
		}
	}

	cout << "\n Rellene la matriz 2\n\n";
	for(int i = 0;i<3;i++){
		for(int j = 0;j<3;j++){
			printf("\t Fila[%d]-Columnas[%d]: ",i,j);cin>>matriz2[i][j];
			
		}
	}

	printf("\n\n\t Producto de las matrices: %d",mul);


	printf("\n\n\n");
	system("pause");
	return 0;
}