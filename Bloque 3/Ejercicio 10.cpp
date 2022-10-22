/*10. Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), 
y mostrar el mes al que corresponde. */

#include <iostream>

using namespace std;

int main() {
	
	int year;
	
	cout<<"Ingrese un numero entre (1-12)"<<endl;cout<<endl;
	cin>>year;
	
	switch(year) {
		
		case 1: cout<<"Enero"; break;
		case 2: cout<<"Febrero"; break;
		case 3: cout<<"Marzo"; break;
		case 4: cout<<"Abril"; break;
		case 5: cout<<"Mayo"; break;
		case 6: cout<<"Junio"; break;
		case 7: cout<<"Julio"; break;
		case 8: cout<<"Agosto"; break;
		case 9: cout<<"Septiembre"; break;
		case 10: cout<<"Octubre"; break;
		case 11: cout<<"Noviembre"; break;
		case 12: cout<<"Diciembre"; break;
		default: cout<<"No es una opción valida"; break;
		
	}
	
	
	
	
	
	return 0;
}
