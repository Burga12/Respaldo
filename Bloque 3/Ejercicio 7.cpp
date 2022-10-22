/*7. Escriba un programa que solicite una edad (un entero) e indique en la 
salida estándar si la edad introducida está en el rango [18-25].*/

#include <iostream>

using namespace std;

int main() {
	
	int n;
	
	cout<<"ingrese su edad: ";cin>>n;cout<<endl;
	
	if (n >= 18 & n<=25) {
		
		cout<<"Su edad esta en el rango de 18-25 anos"<<endl;
		cout<<"su edad es: "<<n;cout<<" anos";
		
	} else if (n<0) {
		
		cout<<"no ha ingresado una edad valida";
		
	} else {
		
		cout<<"Su edad no esta en el rango de 18-25 anos";
	}
	
	
	
	return 0;
}
