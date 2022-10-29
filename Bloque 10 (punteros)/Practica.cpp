/*
	Declaracion de punteros

	&n = Direccion memoria de n
	*n  = La variable cuya direccion esta almacenada en n	

*/


#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int num,*dir_num,*p;

	num = 3;
	p = &num;

	dir_num = &num;
   *dir_num = 10;

	cout << "Numero: "<<*dir_num;
	
	cout << "\nDireccion: "<<dir_num;
	dir_num++; 
	cout << "\nDireccion + 1: "<<dir_num;
	cout << "\nNumero: "<<*dir_num;
	dir_num--;
	cout << "\nDireccion - 1: "<<dir_num;
	cout << "\nNumero: "<<*dir_num;

	cout << "\nsuma: "<< *p + *dir_num;
	cout<<endl<<endl;
	system("pause");
	return 0;
}