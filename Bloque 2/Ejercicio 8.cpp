//hola


#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	float a,b,c;
	
	cout<<"Digite el valor del primer cateto: ";cin>>a;
	cout<<"Digite el valor del segundo cateto: ";cin>>b;
	
	c = sqrt(pow(a,2)+pow(b,2));
	
	cout<<endl;
	cout<<"El valor de la hipotenusa es: "<<c;	
	
	
	return 0;
}
