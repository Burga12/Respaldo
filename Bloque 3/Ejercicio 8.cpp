/*8. Escribe un programa que lea de la entrada estándar tres números. Después 
debe leer un cuarto número e indicar si el número coincide con alguno de los 
introducidos con anterioridad.*/

#include <iostream>

using namespace std;

int main() {
	
	int n1,n2,n3,n4;
	
	cout<<"Digite tres numeros."<<endl;
	
	cin>>n1>>n2>>n3;
	cout<<endl;
	
	cout<<"Ha ingresado"<<endl;cout<<endl;
	
	cout<<"Primer numero: "<<n1<<endl;
	cout<<"Segundo numero: "<<n2<<endl;
	cout<<"Tercer numero: "<<n3<<endl;cout<<endl;
	
	cout<<"Ahora digite un cuarto numero: ";cin>>n4;
		
	//Sentencia condicional de comparación teniendo en cuenta que n4 sea igual a todos o dos numeros ingresados
	
	if ((n4 == n1) && (n4 == n2) && (n4 != n3)){
		
		cout<<"Coincide con el primer y segundo numero ingresado anteriormente"<<endl;
		cout<<n4<<" = "<<n1;cout<<endl;
		cout<<n4<<" = "<<n2;
		
	} else if ((n4 == n1) && (n4 == n3) && (n4 != n2)) {
		
		cout<<"Coincide con el primer y tercer numero ingresado anteriormente"<<endl;
		cout<<n4<<" = "<<n1;cout<<endl;
		cout<<n4<<" = "<<n3;
		
	} else if ((n4 == n2) && (n4 == n3) && (n4 != n1)) {
		
		cout<<"Coincide con el segundo y tercer numero ingresado anteriormente"<<endl;
		cout<<n4<<" = "<<n2;cout<<endl;
		cout<<n4<<" = "<<n3;
		
	} else if((n4 == n2) && (n4 == n1) && (n4 == n3)){
		
		cout<<"Todos los numeros coinciden"<<endl;
		cout<<n4<<" = "<<n1;cout<<endl;
		cout<<n4<<" = "<<n2;cout<<endl;
		cout<<n4<<" = "<<n3;
		
	} else if (n4 == n1) { /*Si no se cumple ninguna de las anteriores entrará a esta sección teniendo en cuenta que n4
		                                        sea igual a un numero ingresado anteriormente*/
		cout<<endl;
		cout<<"Coincide con el primer numero ingresado"<<endl;
		cout<<n4<<" = "<<n1;
		
	} else if (n4 == n2){
		
		cout<<endl;
		cout<<"Coincide con el segundo numero ingresado"<<endl;
		cout<<n4<<" = "<<n2;
		
	} else if (n4 == n3) {
	
		cout<<endl;
		cout<<"Coincide con el tercer numero ingresado"<<endl;
		cout<<n4<<" = "<<n3;
		
	} else { //En caso de que no sea compatible con ningun numero :D
		
		cout<<endl;
		cout<<"No coincide con ningun numero ingresado";
	}
	
	
	
	
	return 0;
}
