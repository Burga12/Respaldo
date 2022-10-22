//Ejercicio 8
//Arreglos

#include<iostream>

using namespace std;

int main() {
	 
	int arr1[5],arr2[5];
	
	cout << "Ingrese 5 numeros: "<<endl;
	
	for (int i = 0; i < 5; i++) {
		
		cout<<(i+1)<<": ";cin>>arr1[i];
	}
	
	cout <<"--------------------"<<endl;
	for (int i = 0; i < 5; i++){
		
		arr2[i] = arr1[i] * 2;
		cout <<(i+1)<<": "<<arr2[i]<<endl;
	}
	
	cout<<endl;
	system("pause");
	
	return 0;
}
