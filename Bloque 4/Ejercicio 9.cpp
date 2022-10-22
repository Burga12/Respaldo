



#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	
	int suma = 1,limite;
	
	cout<<"ingrese un numero: ";cin>>limite;
	
	for(int i = 1; i<=limite; i++){
		
		suma *= i;
		
	}
	
	cout<<endl;
	
	cout<<suma;
	 
	system("pause");
	
	return 0;
}
