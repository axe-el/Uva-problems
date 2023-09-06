//10880 se cocinaron C galletas, G invitados, cada invitado comio Q galletas, sobraron R galletas
//Recibimos C,R imprimir numero de galletas que cada invitado comio orden creciente
//c= 10 , r= 0 , case #1: 1 2 5 10
//NO TENEMOS NUMERO DE PERSONAS, vamos utilizando %, y darse cuenta que si los invitados se comieron 10 galletas
// pueden ser 5 personas cada una comio 2 o pueden ser 2 personas cada una comio 5, opuestos
// para no checar doble
#include <iostream>
#include <cstdio>
#include <set>
using namespace std;

int main() {
	//Leo numero de casos
	int casos; 
	cin >> casos;

	for (int c = 0; c < casos; ++c) {
		//Para cada caso Se cocinaron C GALLETAS, R sobraron
		int C, R; 
		cin >> C >> R;

		//vector para resultados
		set<int> resultados;
		//Numero galletas que se comieron en total
		int diff = C - R;

		//Imprimir caso si C-R = 0 print 0 y saltamos a siguiente caso
		cout << "Case #" << c+1 << ":";
		if (diff == 0) {
			cout << " 0" << endl;
			continue;
		}

		//Caso contrario usar % i = numero personas 
		for (int i = 1; i * i <= diff; ++i){	
			//si para i personas no sobran galletas de las que se comieron en la fiesta
			if (diff % i == 0) {
				//insertamos numero personas , numero galletas
				// 10 galletas comidas, 10 personas cad una comio 1, 1 persona comio 10
				resultados.insert(diff / i);
				resultados.insert(i);
			}
		}
		//Imprimir resultados para este caso siempre que resultado mayor a los que sobraron, porque si es menor entonces
		//No debieron sobrar, esto por el opuesto que se va tomando
		for (set<int>::iterator it = resultados.begin(); it != resultados.end(); it++){
			if (*it > R){ 
				cout << " " << *it;
			}
		}
		cout << endl;
	}
}
