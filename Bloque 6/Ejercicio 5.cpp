//Realice un programa que lea una matriz de 3*3 y cree su matriz transpuesta 01 10

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

	int a[3][3];


	cout << "\nIngrese los elementos de la matriz"<<endl;

	cout<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "Fila "<<i+1<<"/"<<3<<" Columna "<<j+1<<"/"<<3<<": ";cin>>a[i][j];
		}
		cout<<endl;
	}
	//mostrar sin trasponer
	cout << "\nMatriz base\n\n";
	for (int i = 0; i<3;i++){
		for (int j=0;j<3;j++){
			if (j != 2) cout <<a[i][j]<<"-";
			else cout << a[i][j]; //Write the last digit whitout -
		}
		cout<<endl;
	}


	//mostrar transpuesta
	cout << "\nMatriz transpuesta\n\n";
	for (int i = 0; i<3;i++){
		for (int j=0;j<3;j++){
			if (j != 2) cout <<a[j][i]<<"-";
			else cout << a[j][i]; //Write the last digit whitout -
		}
		cout<<endl;
	}

	system("pause");
	return 0;
}
