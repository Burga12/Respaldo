//13. Hacer un que realize la serie fibonacci -> 1 1 2 3 5 8 13...n  

#include<iostream>
#include<stdlib.h>

using namespace std;


int main() {
	
	int x = 0,y = 0,z = 1,n;
	
	cout<<"Digite el tamano de elementos: ";cin>>n;
	
	for(int i = 1; i <= n; i++) {
		
		cout<<z<<" ";
		
		x = y;
		y = z;
		
		z = x + y;
		
	}
	
	cout<<endl;
	system("pause");
	
	return 0;
}
