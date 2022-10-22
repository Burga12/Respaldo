//Ejercicio 3


#include<iostream>
#include<stdlib.h>

using namespace std;

int main( ) {
	
	int limite;
	
	cout<<"Ingrese el tamano del arreglo ";cin>>limite;
	cout<<endl;
	
	int arry[limite];
	
	
	//Control de guardado de elementos
	for (int i = 0; i < limite; i++) {
		
		cout<<"Ingrese el vector de la posicion numero " <<i<<": ";cin>>arry[i];//Guardando los elementos en su respectiva posicion
			
	}
	
	//Imprimiendo en pantalla el respectivo numero en su posicion
	for (int i = 0; i < limite; i++) {
		
		cout<<endl;
		cout<<"Valor en posicion "<<i<<" es igual a: "<<arry[i];//Diciendo al usuario el valor y su dicha posicion
		
		
	}
	
	
	cout<<endl;
	system("pause");
	
	
	
	return 0;
}

