//466 Te dan 2  *..*.
//              .**..
//              ...*.
//ESPEJOS TIPO:  *..*.
//              .*.*.
//
//tE PREGUNTAN AL PRIMERO QUE SE LE HACE PARA LLEGAR AL SEGUNDO
//Si al inicio primero y segundo iguales no se aplico modificiacion, si no pasamos a ->
//Checo si al aplicar cada modificacion al primer espejo llego al segundo, en el momento en que algo no concuerda
//esa modificacion no es y paso a la siguiente, el orden de las modificaciones es:
//roto 90 grados, 180 grados, 270 grados, si ninguna de estas da el segundo patron, se refleja horizontalmente y se checa si solo con esto
//se llega al segundo, si no vuelvo a probar con roto 90 grados, 180 grados, 270 grados, si ninguna da entonces se imprime que no se llega
//al segundo con ninguna de las modificaicones.

#include <bits/stdc++.h>

using namespace std;

//dIMENSION DEL PATRON , primer espejo
int n;

//Se roto 90 grados
inline bool Rotar_90(vector<string> &pattern, vector<string> &modification){
	for(int i = 0, k = n - 1; i < n; ++i, --k){
		for(int j = 0; j < n; ++j){
			if(pattern[i][j] != modification[j][k]){
				return 0;
			}
		}
	}
	return 1;
}

//Se roto 180 grados
inline bool Rotar_180(vector<string> &pattern, vector<string> &modification){
	for(int i = 0, k = n - 1; i < n; ++i, --k){
		for(int j = 0, l = n - 1; j < n; ++j, --l){
			if(pattern[i][j] != modification[k][l]){
				return 0;
			}
		}
	}
	return 1;
}

//Se roto 270 grado
inline bool Rotar_270(vector<string> &pattern, vector<string> &modification){
	for(int i = 0; i < n; ++i){
		for(int j = 0, k = n - 1; j < n; ++j, --k){
			if(pattern[i][j] != modification[k][i]){
				return 0;
			}
		}
	}
	return 1;
}

int main(void){

	int t = 1;

	while(cin >> n){

		//No se modifico
		bool preserved = 1;
			
		//Patron original y al que se quiere llegar
		vector<string> pattern(n);
		vector<string> modification(n);

		//Leer los dos espejos
		for(int i = 0; i < n; ++i){
			cin >> pattern[i] >> modification[i];
			//Si son diferentes en algun caracter se modifico de alguna forma
			if(pattern[i] != modification[i]){
				preserved = 0;
			}
		}

		//SI eran iguales no se modifico
		if(preserved){
			cout << "Pattern " << t++ << " was preserved.\n";
		}
		//caso base Dimension 1 error
		else if(n == 1){
			cout << "Pattern " << t++ << " was improperly transformed.\n";
		}
		//Checar que modificacion se realizo
		else{
			//Se roto 90 grados
			if(Rotar_90(pattern, modification)){
				cout << "Pattern " << t++ << " was rotated 90 degrees.\n";
			}
			//SE ROTO 180
			else{
				if(Rotar_180(pattern, modification)){
					cout << "Pattern " << t++ << " was rotated 180 degrees.\n";
				}
				else{
					//ROTO 270
					if(Rotar_270(pattern, modification)){
						cout << "Pattern " << t++ << " was rotated 270 degrees.\n";
					}
					else{
						//SI NO FUE SOLO ROTACION ENTONCES SE REFLEJO Y UEGO SE ROTO, REFLEJAMOS
						bool reflection = 1;
						for(int i = 0; i < (n >> 1); ++i){
							swap(pattern[i], pattern[n - i - 1]);
							if(pattern[i] != modification[i])
								reflection = 0;
						}
						//Solose reflejo
						if(reflection)
							cout << "Pattern " << t++ << " was reflected vertically.\n";
						//sE REFLEJO Y LUEGO SE ROTO
						else{
							if(Rotar_90(pattern, modification))
								cout << "Pattern " << t++ << " was reflected vertically and rotated 90 degrees.\n";
							else{
								if(Rotar_180(pattern, modification))
									cout << "Pattern " << t++ << " was reflected vertically and rotated 180 degrees.\n";
								else{
									if(Rotar_270(pattern, modification))
										cout << "Pattern " << t++ << " was reflected vertically and rotated 270 degrees.\n";
									else
										//Ninguna de las transformaciones da el segundo espejo
										cout << "Pattern " << t++ << " was improperly transformed.\n";
								}
							}
						}
					}
				}
			}
		}

	}

}

