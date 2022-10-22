

#include <iostream> 
using namespace std;

int main() {
	
	float n;
	
	cout<<"Ingrese un numero: ";cin>>n;cout<<endl;
	
	if (n>0) {
		
		cout<<"Su numero: "<<n;cout<<", ";cout<<"Es positivo";
		
	} else if (n == 0) {
		
		cout<<"Su numero: "<<n;cout<<", ";cout<<"Es cero";
		
	} else {
		
		cout<<"Su numero: "<<n;cout<<", ";cout<<"Es negativo";
	}
	
	
	
	
	
	
	
	
	return 0;
}
