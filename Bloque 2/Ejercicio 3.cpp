//Hola

#include <iostream>

using namespace std;

int main() {
	
	cout<<"Hola :D"<<endl;
	
	float a,b,c,d,e,f, resultado = 0;
	
	cout<<"Ingre el valor de 'a': ";cin>>a;
	cout<<"Ingre el valor de 'b': ";cin>>b;
	cout<<"Ingre el valor de 'c': ";cin>>c;
	cout<<"Ingre el valor de 'd': ";cin>>d;
	cout<<"Ingre el valor de 'e': ";cin>>e;
	cout<<"Ingre el valor de 'f': ";cin>>f;
	
	resultado = ((a + b/c) / (d + e/f));
	
	cout.precision(2);
	cout<<"El resultado es: "<<resultado;
	
	return 0;
}
