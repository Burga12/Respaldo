#include <iostream>

using namespace std;
	
int main(){

	int array[] = {5,4,3,2,1},aux = 0;
	int pos = 0;
	

	for (int i = 0; i < 5; i++){
		pos = i;
		aux = array[i];

		while((pos > 0) && (array[pos-1] > aux)){
			array[pos] = array[pos-1];
			pos--;
		}

		array[pos] = aux;
	}


		for (int i = 0; i < 5;i++){
			cout<<" "<<array[i];
		}


	return 0;
}