/* 
	Hacer una estructura llamada promedio que tenga los siguientes datos nota1,nota2,nota3. y otra llamada
	alumno que tendra los siguientes campos: nombre,edad,sexo; hacer que la estructura promedio este 
	anidad con la estructura alumno. luego pedir los datos del alumno y por ultimo mostrar dichos datos
	en pantalla incluido el promedio


	but now for n students and show the student with more score
*/

#include <iostream>
#include <stdlib.h>


using namespace std;

struct alumnos
{
	string nombre;
	int edad;
	string sexo;

	struct promedio
	{
		int notas[3];
	}promedy;

};


int main()
{

	float promedio, mayor = 0;
	int numberAlumns, positionA;

	cout << "\n\t\t Promedio de un alumno\n\n";

	cout << "\n\n Ingrese el numero de alumnos: ";
	cin >> numberAlumns;

	//declaramos el arreglo de alumnos
	alumnos alumno[numberAlumns];

	system("cls");

	for (int i = 0; i < numberAlumns; i++)
	{
		cout << "\n\t Ingrese los datos del alumno "<<i+1<<endl;
		cout << "\n Nombre: "; cin >> alumno[i].nombre;
		cout << "\n edad: ";   cin >> alumno[i].edad;
		cout << "\n sexo: ";   cin >> alumno[i].sexo;

		cout << "\n\t Ahora ingrese las notas del alumno\n\n";
		cout << "\n Nota 1: "; cin >> alumno[i].promedy.notas[0]; 
		cout << "\n Nota 2: "; cin >> alumno[i].promedy.notas[1];
 		cout << "\n Nota 3: "; cin >> alumno[i].promedy.notas[2];

 		promedio = (alumno[i].promedy.notas[2] + alumno[i].promedy.notas[1] + alumno[i].promedy.notas[0])/3;

 		//determinar el mayor promedio

 		if (promedio > mayor)
 		{
 			mayor = promedio;//guardamos el promedio
 			positionA = i; //guardamos la posicion del alumno
 		}	
	}
	

 	system("cls");

 	cout << "\n\t Datos del alumno con mayor promedio\n\n";

	
	cout << "\n Nombre: "  <<  alumno[positionA].nombre;
	cout << "\n edad: "    <<  alumno[positionA].edad;
	cout << "\n sexo: "    <<  alumno[positionA].sexo;
	cout << "\n Promedio: "<<  mayor; 

	cout <<"\n\n";
	system("pause");

	return 0;
}