#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

	int array[] = {5,2,4,1,3};
	int min,aux = 0;

	for (int i = 0; i < 5; i++){

		min = i;

		for (int j = i+1; j < 5; j++){

			if (array[j] < array[min] ) {
				min = j;
			}
		}

		aux = array[i];
		array[i] = array[min];
		array[min] = aux;
	}

	for (int i = 0; i < 5; i++)
		printf("%d ",array[i]);

	cout<<"\n\n\n";
	system("pause");
	return 0;

}