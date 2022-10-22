

#include <iostream>

using namespace std;

int main() {
	
	char letra;
	
	cout<<"Digite un Caracter: ";cin>>letra;cout<<endl;
	
	switch (letra) {
		
		case 'a': 
			cout<<"Ha ingresado una vocal minuscula, ingreso la letra: "<<letra;
			break;
		
		case 'e': 
			cout<<"Ha ingresado una vocal minuscula, ingreso la letra: "<<letra;
			break;
		
		case 'i': 
			cout<<"Ha ingresado una vocal minuscula, ingreso la letra: "<<letra;
			break;
		
		case 'o': 
			cout<<"Ha ingresado una vocal minuscula, ingreso la letra: "<<letra;
			break;
		
		case 'u': 
			cout<<"Ha ingresado una vocal minuscula, ingreso la letra: "<<letra;
			break;
		
		case 'A': 
			cout<<"Ha ingresado una vocal mayuscula, ingreso la letra: "<<letra;
			break;
		
		case 'E': 
			cout<<"Ha ingresado una vocal mayuscula, ingreso la letra: "<<letra;
			break;
		
		case 'I': 
			cout<<"Ha ingresado una vocal mayuscula, ingreso la letra: "<<letra;
			break;
		
		case 'O': 
			cout<<"Ha ingresado una vocal mayuscula, ingreso la letra: "<<letra;
			break;
		
		case 'U': 
			cout<<"Ha ingresado una vocal mayuscula, ingreso la letra: "<<letra;
			break;
		
		default:
			cout<<"No ha ingresado una vocal, ha ingresado: "<<letra;
	}
	
	
	return 0;
}
