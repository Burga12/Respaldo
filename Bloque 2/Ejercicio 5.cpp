//hola

#include <iostream> 

using namespace std;

int main() {
	
	cout<<"Hola :D"<<endl;
	
	int a,b,aux = 0;
	
	cout<<"Digite el valor de 'a': ";cin>>a;
	cout<<"Digite el valor de 'b': ";cin>>b;
	
	cout<<endl;
	
	cout<<"El valor de 'a' actualmente es: "<<a<<endl;
	cout<<"El valor de 'b' actualmente es: "<<b<<endl;
	
	cout<<endl;
	
	//algoritmo de intermcabio de valores de una variable usando la variable "aux" como auxiliar del intercambio
	//asi no se pierde ningun valor
	aux = a;
	a = b;
	b = aux;
	
	
	
	cout<<"Luego del intercambio los valores son:";cout<<endl;
	cout<<"'a' = "<<a<<endl; cout<<"'b' = "<<b;
	
	
	return 0;
}
