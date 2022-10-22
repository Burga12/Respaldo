/*2. Realice un programa que lea de la entrada estándar números hasta que se 
introduzca un cero. En ese momento el programa debe terminar y mostrar en la 
salida estándar el número de valores mayores que cero leídos.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	
	int n,i=0;
	
	do {
		cout<<"Ingrese un numero: ";cin>>n;
		
		if(n>0){
			i++;
		}
		
	}while(n != 0);
	
	cout<<"La cantidad de numeros mayores a 0 fueron: "<<i;cout<<endl;cout<<endl;
	
	system("pause");

	return 0;
}
