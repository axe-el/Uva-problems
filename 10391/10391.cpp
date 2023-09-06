//Buscar todas las palabras compuestas de un diciconario
//Guardo todas las palabras en un set/mapa divido cada palabra en todas las posibles subpalabras Gato : G ato , Ga to, Gat o
//Busco estas dos nuevas palabras en el set/mapa constante si si se encuentran , entonces la original era compuesta
#include <set>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//Diccionario
	set< string > Set;
	//iterador
	set< string >::iterator it;
	//dos palbras de las que se deberia de componer la original
	string str, A, B;
	//Leo todas las palabras y meto al set
	while (cin >> str){
		Set.insert(str);
	}
	//Para cada una de las palabras del diccionario	
	for (it = Set.begin(); it != Set.end(); it++) {
		str = *it;
		//Las divido en todas las posibles subpalabras
		for (int i = 1; i < str.length(); i++) {
			A = str.substr(0, i);
			B = str.substr(i);
			//Si las dos subpalbras existen en el diciconario, set.find constante, entonces str es compuesta
			if (Set.find(A) != Set.end() && Set.find(B) != Set.end()) {
				cout << str << endl;
				break;
			}

		}
	}

}