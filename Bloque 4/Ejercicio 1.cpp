/*1. Realice un programa que solicite de la entrada estándar un entero del 1 al 
10 y muestre en la salida estándar su tabla de multiplicar.*/

#include <iostream>

using namespace std;

int main() {
	
	int i = 1,n,resul;
	cout<<"\tTabla de multiplicar";cout<<endl;
	cout<<"Ingrese un numero entre 1-10"<<endl;cin>>n;

		while (i <= 10 ) {
		
			resul = n * i;
			cout<<n<<" x "<<i<<" = "<<resul<<endl;
			i++;
		}
	
		return 0;
}
