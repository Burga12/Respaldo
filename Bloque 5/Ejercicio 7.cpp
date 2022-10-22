// Hola

#include<iostream>

using namespace std;

int t1,t2,h = 0,c = 0;

int main() {
	
	cout << "Ingrese el tamano del arreglo 1: ";cin>>t1;
	cout << "Ingrese el tamano del arreglo 2: ";cin>>t2;
	
	int arr1[t1],arr2[t2];
			
	cout << "\nIngrese los valores del primer arreglo"<<endl;
	
	
	for(int i = 0; i < t1; i++) {
		
			cout<<i+1<<": ";cin>>arr1[i];
	}
	
	cout << "\nIngrese los valores del segundo arreglo"<<endl;
	
	//Guardando los datos del segundo arreglo
	for(int i = 0; i < t2; i++) { 
		
		cout<<i+1<<": ";cin>>arr2[i];
	}
	
	c = t1 + t2;
	int arr3[c];
	
	for (int i = 0; i < c; i++) {
		
		if (i < t1) {
			
			arr3[i] = arr1[i];	
			
		} else {
			
			arr3[i] = arr2[h];	
			h++;
		}   
	}
		
	cout << "\nElementos en el arreglo numero 3: ";
	
	//Mostrar los datos almecenados en el tercer arreglo	
	for (int i = 0; i < c; i++) {
		
		if (i != (c-1)) cout<<arr3[i]<<", ";//Escribir en orden los numeros con una coma al lado
		
		 else  cout<<arr3[i];//Escribir el ultimo sin una coma al final
	}
	
	cout<<endl;
	system("pause");
	
	return 0;

}


