/*11. Hacer un programa que simule un cajero automático con un saldo inicial 
de 1000 Dólares.*/

#include <iostream>

using namespace std;

int main() {
	
	int saldo = 1000,retiro = 0,saldoFinal = 0,op,extra;
	cout<<"\tBienvenido a su cajero automatico"<<endl;
	cout<<endl;
	cout<<"Ingrese '1' para consultar saldo"<<endl;
	cout<<"Ingrese '2' para ingresar saldo"<<endl;
	cout<<"Ingrese '3' para retirar saldo"<<endl;
	cout<<"Ingrese '4' para salir del programa"<<endl;cout<<endl;
	cin>>op;
	
	if (op == 1) {
		
		cout<<endl;
		cout<<"Su saldo es de: "<<saldo<<"Bs.";cout<<endl;
		
		cout<<endl;cout<<endl;
		cout<<"Gracias por usar mi programa"<<endl;
		
	} else if (op == 2){
	
		cout<<endl;
		cout<<"Ingrese la cantidad que desea ingresar: ";cin>>extra;cout<<endl;
		
		saldoFinal = saldo + extra;
		
		cout<<"Su saldo es de: "<<saldoFinal<<"Bs.";cout<<endl;
	
	} else if (op == 3) {
		
		cout<<endl;
		cout<<"Ingrese la cantidad que desea retirar: ";cin>>retiro;cout<<endl;
		
		if (retiro > saldo) {
			
			cout<<"No puede retirar esa cantidad saldo insuficiente"<<endl;
			cout<<"su saldo es de: "<<saldo;cout<<"Bs."<<endl;
			
			cout<<endl;cout<<endl;
			cout<<"Gracias por usar mi programa"<<endl;
			
		} else {
			
			saldoFinal = saldo - retiro;
			cout<<"Ha sido retirado la cantidad de: "<<retiro<<"Bs. "<<" Satisfactoriamente"<<endl;cout<<endl;
			cout<<"Su saldo restante es de: "<<saldoFinal<<"Bs.";
			
			cout<<endl;cout<<endl;
			cout<<"Gracias por usar mi programa"<<endl;
			
		}
		
	} else if (op == 4) {
		
		cout<<"Adios"<<endl;cout<<endl;
		
		cout<<endl;cout<<endl;
		cout<<"Gracias por usar mi programa"<<endl;
		
	} else {
		
		cout<<endl;cout<<endl;
		cout<<"No ha ingresado un dato existente, porfavor reinicie el programa e intentelo de nuevo"<<endl;cout<<endl;
		
	}
	
	
	
	return 0;
}
