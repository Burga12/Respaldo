/*
  Hacer un programa que de la entradad standard del precio de un producto y muestre en la salida
  el precio del producto más el IVA
*/

#include <iostream>

using namespace std;

int main() {
	
	float IVA,precio,precioFinal;
	
	cout<< "Digite el valor del producto: ";
	cin>>precio;
	
	cout<<" "<<endl;
	
	IVA = precio*0.16;
	
	cout<<IVA<<endl;
	precioFinal = precio + IVA;
	
	cout<<"El precio del producto es: "<<precio<<endl;
	cout<<"mas el IVA es: "<<precioFinal;
	
	return 0;
}
