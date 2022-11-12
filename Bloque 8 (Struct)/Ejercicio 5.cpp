/* 
	Hacer una estructura llamada promedio que tenga los siguientes datos nota1,nota2,nota3. y otra llamada
	alumno que tendra los siguientes campos: nombre,edad,sexo; hacer que la estructura promedio este 
	anidad con la estructura alumno. luego pedir los datos del alumno y por ultimo mostrar dichos datos
	en pantalla incluido el promedio
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

}alumno;


int main()
{

	int promedio;

	cout << "\n\t\t Promedio de un alumno\n\n";
	cout << "\n\t Ingrese los datos del alumno\n";
	cout << "\n Nombre: "; cin >> alumno.nombre;
	cout << "\n edad: ";   cin >> alumno.edad;
	cout << "\n sexo: ";   cin >> alumno.sexo;

	cout << "\n\t Ahora ingrese las notas del alumno\n\n";
	cout << "\n Nota 1: "; cin >> alumno.promedy.notas[0]; 
	cout << "\n Nota 2: "; cin >> alumno.promedy.notas[1];
 	cout << "\n Nota 3: "; cin >> alumno.promedy.notas[2];

 	promedio = (alumno.promedy.notas[2] + alumno.promedy.notas[1] + alumno.promedy.notas[0])/3;

 	system("cls");

 	cout << "\n\t Datos del alumno ingresados\n\n";

	
	cout << "\n Nombre: "  <<  alumno.nombre;
	cout << "\n edad: "    <<  alumno.edad;
	cout << "\n sexo: "    <<  alumno.sexo;
	cout << "\n Promedio: "<<  promedio; 

	cout <<"\n\n";
	system("pause");

	return 0;
}