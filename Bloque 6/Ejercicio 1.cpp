//Almacenar y mostrar datos de una matriz

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

	int matriz[100][100],fila,colum;

	cout <<"\tAlmacenar y mostrar datos de una matriz\n";

	cout << "\nIngrese el numero de filas: ";cin>>fila;
	cout << "\nIngrese el numero de columnas: ";cin>>colum;
	cout << "\nIngrese los valores\n\n";

	//Almacenar
	for (int i = 0; i<fila; i++){
		for (int j = 0; j<colum;j++){
			cout << "Fila "<<i+1<<"/"<<fila<<" Columna "<<j+1<<"/"<<colum<<": ";cin>>matriz[i][j]; 
		}
		cout<<endl;
	}

	//Mostrar
	for (int i = 0; i<fila;i++){//i filas
		for (int j=0;j<colum;j++){//j columnas
			if(j != colum-1) cout <<matriz[i][j]<<"-";
			else cout << matriz[i][j];
		}
		cout<<endl;
	}


	cout<<endl;
	system("pause");
	return 0;
}