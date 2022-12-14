/*7. Defina una estructura que indique el tiempo empleado por un ciclista en 
una etapa. La estructura debe tener tres campos: horas, minutos y segundos. 
Escriba un programa que dado n etapas calcule el tiempo total empleado en 
correr todas las etapas.*/

#include <iostream>
#include <stdlib.h>
#define cls system("cls");

using namespace std;


struct lap
{	
	int hour;
	int minute;
	int second;
};


int main()
{

	int n_laps,
	total_hour   = 0,
	total_minute = 0,
	total_second = 0;

	int day = 0;//esta variable la usaremos solo si se superan o igualas las 24horas

	cout << "\n Calcular tiempo total de un ciclista al completar cierto numero de etapas\n\n\n";

	cout << "\n Ingrese el numero de etapas que hizo el ciclista: ";
	cin >> n_laps;

	lap laps[n_laps];

	for (int i = 0; i < n_laps; i++)
	{
		cls;
		cout << "\n\t Ingrese el tiempo de la vuelta " << i+1<<"\n";

		cout << "\n Horas: ";
		cin  >> laps[i].hour;
		total_hour += laps[i].hour;

		cout << "\n Minutos: ";
		cin  >> laps[i].minute;
		total_minute += laps[i].minute;

		cout << "\n Segundos: ";
		cin  >> laps[i].second;
		total_second += laps[i].second;

		//vamos suamndo el total

		while(total_hour >= 24)
		{	
			//si supera o iguala las 24 horas, sumamos un dia
			total_hour -= 24;
			day++;
		}

		while(total_minute >= 60)
		{
			//si supera o iguala los 60 minutos sumamos una hora y restamos 60
			/* Ejemplo:  87 minutos
					87 - 60 = 27
				resultado final: 1:27:00
			*/

			total_minute -= 60;
			total_hour++;
		}

		//igual que con los minutos
		while(total_second >= 60)
		{
			total_second -= 60;
			total_minute++;
		}

	}

	

	cout << "\n Tiempo total \n";

	if (day > 0)
		cout << "\n Dias: "<<day;

	cout <<"\n\n "<< total_hour << ":" << total_minute << ":" << total_second << "\n\n\n";

	system("pause");
	return 0;
}
