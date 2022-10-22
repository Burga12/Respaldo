/*16. Realice un programa que calcule la descomposición en factores primos de 
un número entero.

Por ejemplo: 20 = 2*2*5.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int num;
	
	cout<<"Digite un numero: "; 
	cin>>num;
	
	cout<<"\nFactores primos: ";
	
	for(int i=2;num>1;i++){
		while(num%i==0){
			cout<<i<<"* ";
			num /= i;
		}
	}
	
	cout<<endl;
	system("pause");
	return 0;
}

