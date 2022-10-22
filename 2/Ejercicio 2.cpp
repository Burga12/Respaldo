//hola
 

#include <iostream>

using namespace std;

int main() {
	
	cout<<"Hola :D"<<endl;cout<<endl;
	
	float a,b,c,d,resultado = 0;
	
	cout<<"Digite el valor de 'a': ";cin>>a;cout<<endl;
	cout<<"Digite el valor de 'b': ";cin>>b;cout<<endl;
	cout<<"Digite el valor de 'c': ";cin>>c;cout<<endl;
	cout<<"Digite el valor de 'd': ";cin>>d;cout<<endl;
	
	resultado = (a+b) / (c+d);
	
	cout.precision(3);
	cout<<"El resultado es: "<<resultado<<endl;cout<<endl;
	cout<<"Gracias por usar el programa :D";
	
	return 0;
}
