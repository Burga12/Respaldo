/*14. En una clase de 5 alumnos se han realizado tres exámenes y se requiere 
determinar el número de: 
	a) Alumnos que aprobaron todos los exámenes.
	b) Alumnos que aprobaron al menos un examen.
	c) Alumnos que aprobaron únicamente el último examen.
	
Realice un programa que permita la lectura de los datos y el cálculo de las 
estadísticas.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	
	int todoAprobado = 0,unoAprobado = 0,ningunoAprobado = 0,examenes,soloFinal=0;
	string alumno,examenFinal;
	
	for(int i = 1; i<= 5; i++){
		
		cout<<"\nIngrese el nombre del Alumno numero "<<i<<": ";cin>>alumno;cout<<endl;
		
		cout<<"Ingrese el numero de los examenes aprobados de "<<alumno<<": ";cin>>examenes;cout<<endl;
		cout<<"EL alumno aprobo solamente el examen final (pregunta): ";
		cout<<"Ingrese 'Si' o 'No'";cout<<endl;cin>>examenFinal;
		
		if (examenes == 3) {
			
			cout<<endl;
			cout<<"El alumno: "<<alumno<<" aprobo todos los examenes";
			todoAprobado += 1;
			cout<<endl;
			
		} else if ((examenes == 1)&&(examenFinal == "Si" || examenFinal == "si" || examenFinal == "SI" || examenFinal == "sI")){
			
			cout<<endl;
			cout<<"El alumno: "<<alumno<<" aprobo solamente el ultimo examen";
			soloFinal += 1;
			cout<<endl;
			
		} else if ((examenes>=1) && (examenes<=2)) {
			
			cout<<endl;
			cout<<"El alumno: "<<alumno<<" aprobo al menos un examen";
			unoAprobado += 1;
			cout<<endl;
			
		} else {
			
			cout<<endl;
			cout<<"El alumno: "<<alumno<<" no aprobo ningun examen";
			ningunoAprobado += 1;
			cout<<endl;
		}
		
		
		
		
	}
	
	cout<<endl;
	cout<<"La cantidad de alumnos que aprobo todos los examenes es: "<<todoAprobado;cout<<endl;
	cout<<"La cantidad de alumnos que aprobo al menos 1 examen es: "<<unoAprobado;cout<<endl;
	cout<<"La cantidad de alumnos que aprobo solamente el 3er examen es: "<<soloFinal;cout<<endl; 
	cout<<"La cantidad de alumnos que no aprobo los examenes es: "<<ningunoAprobado;cout<<endl;
	
	cout<<endl;
	system("pause");
	
	
	return 0;
}
