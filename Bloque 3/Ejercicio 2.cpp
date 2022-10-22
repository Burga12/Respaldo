

#include <iostream>

using namespace std;

int main() {
	
	float n1,n2,n3;
	cout<<"Digite tres numeros: "<<endl;cin>>n1>>n2>>n3;
	
	if (n1>n2 & n1>n3) {
		
		cout<<"Los numeros ingresados son: "<<n1<<", "<<n2<<", "<<n3<<endl;cout<<endl;
		cout<<"El numero mayor es: "<<n1;
		
	} else if (n2 > n1 & n2>n3) {
		
		cout<<"Los numeros ingresados son: "<<n1<<", "<<n2<<", "<<n3<<endl;cout<<endl;
		cout << "El numero mayor es: "<<n2;
		
	} else {
		
		cout<<"Los numeros ingresados son: "<<n1<<", "<<n2<<", "<<n3<<endl;cout<<endl;
		cout << "El numero mayor es: "<<n3;
	}
	
	
	return 0;
}
