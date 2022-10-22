//Funcion

#include <iostream>
#include <stdlib.h>

using namespace std;
int seguir;

void descomponer(void);
void invertir(void);
void big(void);

int main() {
	
	
	do{
		system("cls");
		cout << "\n\tBienvenido";
		cout << "\n\tElija alguna de las seguientes opciones";
		cout << "\n\n\t1: Descomponer un numero";
		cout << "\n\t2: Encontrar el numero mayor posible de un numero de 3 digitos";
		cout << "\n\t3: Invertir un numero de 3 digitos";
		cout << "\n\tIngrese cualquier otro numero para salir";
		cout << "\n\n\tIngresar: ";cin>>seguir;
	
		switch(seguir){
			
			case 1:
				descomponer();
				break;
			case 2:
				big();
				break;
			case 3:
				invertir();	
					
		}
		
		if (seguir < 1 || seguir > 3) {
			
			cout << "\n\tSeguro que desea salir?";
			cout << "\n\t2: Volver al menu";
			cout << "\n\tIngresar: ";cin>>seguir;
		}

	}while(seguir == 2);
	
	cout << "\n\nMuchas Gracias por ultilzar el programa :3";
	
	return 0;
}

void descomponer(void){
	
	int num,num2 = 0,aux = 1, k = 1;
		
	do {
		num2 = 0; k = 1;
		system("cls");
		cout << "\ningrese un numero: ";cin>>num;
			
		for (int i = 1; num > 0; i++) {

		
			num2 = num%10 * k;
			cout << num2 <<". ";	
			num /= 10;
			k *= 10;
			
		}
			
		cout << "\n\n\tDesea descomponer otro numero?";
		cout << "\n\t1: Hacerlo de nuevo";
		cout << "\n\t2: volver al menu";
		cout << "\n\tIngrese cualquier otro numero para salir";
		cout << "\n\n\tIngresar: ";cin>>seguir;
		
	}while(seguir == 1);
}

void invertir(void){

	int n,aux = 0,resul = 0,nAux = 0;
	
	do{
		system("cls");
		cout << "\nIngrese un numero exclusivamente de 3 digitos"<<endl;
		cout << "Ingresar: ";cin>>n;
		
		if (n < 0) {
			nAux = n;
			n *= -1;
		}

		if ((n >= 100) && (n <= 999)) {
		
			resul = n/100;
		
			resul += ((n%100)/10)*10;
		
			resul += (n%10) *100;
			n*= -1;

		if (n == nAux) {
			resul *= -1;
		}

		cout<<endl;
		cout <<"Invertido: "<< resul;
		
		} else {
		
		cout << "\nNumero ingresado invalido. No es un numero de 3 digitos";
		}

		
	
		cout << "\n\n\tDesea invertir otro numero?";
		cout << "\n\t1: Hacerlo de nuevo";
		cout << "\n\t2: volver al menu";
		cout << "\n\tIngrese cualquier otro numero para salir";
		cout << "\n\tsIngresar: ";cin>>seguir;
	
	}while(seguir == 1);
}

void big(void){

	int n,mayor = 0,menor = 0, medio = 0,n1 = 0,n2 = 0,n3 = 0,nAux = 0;


	do {
		system("cls");

		cout << "\t Crear el numero mayor posible de ingresar un numero de 3 digitos\n";
		
		
		do {
			
			cout << "\nIngrese un numero: ";cin>>n;
			
			if ((n >= 100 && n <= 999) || ( n <= -999 && n >= -100)){ 
	
			} else {
			 cout << "\nSolamente puede ingresar numeros de 3 digitos";
			}
			
		} while ((n < 100 || n > 999) && ( n <= -999 || n >= -100));

		n1 = n%10;
		n2 = (n%100)/10;
		n3 = n/100;
		
		//Encontrar el numero mayor de los 3
		if (n1 > n2 && n1 > n3 ) {
			
			mayor = n1;
		} else if (n2 > n3) {
			
			mayor = n2;
			
		} else  {
			
			mayor = n3;
		}
		//encontrar el numero menor de los 3
		if (n1 < n2 && n1 < n3 ) {
			
			menor = n1;
			
		} else if (n2 < n3) {
			
			menor = n2;
			
		} else  {
			
			menor = n3;
		}
		//Encontrar el numero de en medio
		if ((mayor == n1 || menor == n1) && (menor == n2 || mayor == n2)) {
			  
			medio = n3;
			
		} else if ((mayor == n3 || menor == n3) && (menor == n2 || mayor == n2)) {
			
			medio = n1;
			
		} else {
			
			medio = n2;
		}
		
		mayor *= 100;
		medio *= 10;
		n = mayor + medio + menor;

		cout << "\nEl numero mayor posible es: "<<n<<endl;
		
			
			cout << "\nDesea hacerlo nuevamente?"<<endl;
			cout << "\n\t1: Hacerlo de nuevo";
			cout << "\n\t2: volver al menu";
			cout << "\n\tIngrese cualquier otro numero para salir";
			cout << "\n\n\tIngresar: ";cin>>seguir;
			
		} while (seguir == 1);
	
}
