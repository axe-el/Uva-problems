//12541 Clase persona para guardar la informacion, creo una funcion para comparar dos personas
//pRIMEero por year,mes,dia,nombre para usar sort para ordenarlos

#include <bits/stdc++.h>
using namespace std;

//Clase persona(dia,mes,year,nombre)
class Person{
	public:
		int dia;
		int mes;
		int year;
		string name;

		Person(){}

		inline bool operator<(const Person& a){
			if (year == a.year){
				if (mes == a.mes){
					if (dia == a.dia){
						return name < a.name;
					}
					else{
						return dia < a.dia;
					}
				}
				else{
					return mes < a.mes;
				}
			}
			else{
				return year < a.year;
			}
		}
};

int main(void){
	//Numero personas
	int n;
	cin >> n;

	vector <Person> personas;
	Person P;

	//Leo los datos de las personas
	for (int i = 0; i < n; ++i){
		cin >> P.name >> P.dia >> P.mes >> P.year;
		personas.push_back(P);
	}

	//Sort
	sort(personas.begin(), personas.end());
	//Mayor y menor
	cout << personas[n - 1].name << "\n" << personas[0].name << "\n";

}

