/*15. Realice un programa que solicite al usuario que piense un número entero 
entre el 1 y el 100. El programa debe generar un numero aleatorio en ese mismo
rango[1-100],e indicarle al usuario si el numero que digito es menor o mayor 
al numero aleatorio, así hasta que lo adivine. y por ultimo mostrarle el numero
de intentos que le llevo.

variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);
*/

//srand(time(NULL)); //generar un numero aleatorio entre 1-100
//	dato = 1 + rand()%(101-1)

#include<iostream>
#include<stdlib.h>
#include<time.h>


using namespace std;

int main(){
	
	int dato,numero,contador = 0;
	
	srand(time(NULL)); //generar un numero aleatorio entre 1-100
    dato = 1 + rand()%(101-1);
    
    cout<<"ingrese un numero: ";cin>>numero;
    cout<<endl;
    
    do {
    	
    	if (numero > dato) {
    		
    		cout<<endl;
    		cout<<"Ingrese un numero menor"<<endl;
    		cin>>numero;
		}
		
		if (numero < dato) {
    		
    		cout<<endl;
    		cout<<"Ingrese un numero mayor"<<endl;
    		cin>>numero;
    		
		}
    	
    	contador++;
    	
	}while(dato != numero);
	
	
	cout<<endl;
	cout<<"\tFELICIDADES LO HAS LOGRADO"<<endl;
	cout<<"\tHAS ADIVINADO EL NUMERO"<<endl;
	cout<<endl;
	cout<<"Numero de intentos: "<<contador<<endl;
	
	cout<<endl;
	system("pause");
	
	
	
	
	
	return 0;
}

