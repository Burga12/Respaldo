//Hola

#include <iostream> 

using namespace std;

int main() {
	
	cout<<"Hola :D"<<endl;
	
	float resultado = 0,a,b;
	
	cout<<"Digite el valor de 'a': "; cin>>a; cout<<endl;
	cout<<"Digite el valor de 'b': "; cin>>b; cout<<endl;
	
	resultado = (a/b) + 1; //Expresion de la ecuaación en codiga C++
	
	cout.precision(2); //Acción de redondeo :D
	cout<<"El resultado es: "<<resultado<<endl;
	
	return 0;
}
