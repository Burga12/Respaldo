//8. Escriba un programa que calcule el valor de: 1+3+5+...+2n-1

#include<iostream>

using namespace std;

int main() {
	
	int suma = 0,n;
	
	cout<<"Digite el tamaño de los valores: ";cin>>n;
	
	for(int i = 1;i<=n;i+=2){
		
		suma += i;  // i = 1.  i = 3. i = 5. i = 7..
		n++;       // n = 4. n = 5. n = 6. n = 7
	}
	
	cout<<endl;
	cout<<suma;
	
	return 0;
}
