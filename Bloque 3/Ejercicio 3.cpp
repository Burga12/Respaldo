
#include <iostream> 

using namespace std;

int main() {
	
	int n1;
	
	cout<<"Digite un numero: ";cin>>n1;
	
	
	if(n1 == 0) {
		
		cout<<"El numero es 0";
		
	} else if (n1 % 2 == 0) {
		
		cout<<"Es un numero par";
		
		
	} else {
		
		cout<<"El numero es impar";
	}
	

	
	
	return 0;
}
