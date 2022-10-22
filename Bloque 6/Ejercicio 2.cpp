//Mostrar el diagonal de una matriz de 3x3

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int matriz[3][3]= {1,2,3 , 4,5,6 , 7,8,9};

	cout <<"\tMostrar el diagonal de una matriz de 3x3"<<endl;

	cout << "\nMatriz: \n\n";

	for (int i = 0; i<3;i++){
		for (int j=0;j<3;j++){
			if(j != 2) cout <<matriz[i][j]<<"-";
			else cout << matriz[i][j];
		}
		cout<<endl;
	}

	cout << "\nDiagonal: \n\n";

	for (int i=0;i<3;i++){
		if(i != 2) cout <<matriz[i][i]<<"-";
			else cout << matriz[i][i];
	}

	cout<<endl<<endl;
	system("pause");
	return 0;	
}