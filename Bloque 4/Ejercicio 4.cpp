/*4. Escriba un programa que tome cada 4 horas la temperatura exterior, 
leyéndola durante un período de 24 horas. Es decir, debe leer 6 temperaturas. 
Calcule la temperatura media del día, la temperatura más alta y la más baja.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	
	float temp = 0,tempAlta=0,tempBaja = 1000,tempMedia=0,tempPro;
	
	
	for(int i = 0; i <= 24; i+=4) {
		
		cout<<"ingrese la temperatura a las "<<i<<" horas: ";cin>>temp;cout<<endl;
		
		tempPro += temp;
		
		if (temp > tempAlta) {
			
			tempAlta = temp;
		}
			
		
		if (temp < tempBaja) {
			
			tempBaja = temp;
		}
	}
	
	tempMedia = tempPro / 6; //entre 6 porque son 6 temperaturas al dia
	
	cout<<endl;	
	cout<<"\nLa temperatura media del dia es: "<<tempMedia<<endl;
	cout<<"Temperatura mas alta: "<<tempAlta<<" Grados";cout<<endl;
	cout<<"Temperatura mas baja: "<<tempBaja<<" Grados";cout<<endl;
	
	return 0;
}


