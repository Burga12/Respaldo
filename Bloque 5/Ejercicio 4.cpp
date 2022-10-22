//AJA TU

#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	
	int n;
	
	cout<<"Digite el tamano del arreglo ";cin>>n;
	int array[n];
	
	cout<<"Digite los numeros dentro del arreglo"<<endl;
	
	for (int i = 0; i < n; i++) {
		
		cin>>array[i];
		
	}
	

	cout<<endl;
	
	 for (int i = (n-1); i > -1; i--) {
	 	
	 	cout<<"Elemento en posicion "<<i<<": "<<array[i]<<endl;
	 	
	 }	
	 
	cout<<endl;
	
	system("pause");
		
	return 0;
}
