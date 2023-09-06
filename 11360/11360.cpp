//11360 operaciones a una matriz, talacha intercambiar filas,columnas , transponer, incrementar , decrementar modulo 10
//Simplemente guardamos la matriz , identificamos la operacion y aplicamos cambio a la matriz acorde
#include <bits/stdc++.h>

using namespace std;

int main(void){

	//Numero casos
	int testCases;
	cin >> testCases;

	//
	for(int t = 1; t <= testCases; ++t){
		//size matriz		
		int n;
		cin >> n;
		//Matriz y transpuesta
		vector< vector<int> > aT(n, vector<int>(n));
		vector< vector<int> > matrix(n, vector<int>(n));

		//Leer valores de la matriz 1234 -> 1 fila 1|2|3|4
		for(int i = 0; i < n; ++i){
			string row;
			cin >> row;
			for(int j = 0; j < n; ++j)
				matrix[i][j] = row[j] - '0';
		}

		//Numero de instrucciones
		int instructions;
		cin >> instructions;

		//Todas las instrucciones
		for(int k = 0; k < instructions; ++k){
			int a;
			int b;
			string instruction;

			//Leer la instruccion row a b, col a b, inc, dec, transpose
			cin >> instruction;
			//Primera letra de instruccione 				//Transponer
			if(instruction[0] =='t'){

				for(int i = 0; i < n; ++i){
					for(int j = 0; j < n; ++j)
						aT[j][i] = matrix[i][j];
				}
				matrix = aT;
			}
			//intercambiar row a -> b
			else if(instruction[0] =='r'){
				cin >> a >> b;
				matrix[a - 1].swap(matrix[b - 1]);
			}
			//intercambiar columansa		
			else if(instruction[0] =='c'){
				int a;
				int b;
				cin >> a >> b;
				--a;
				--b;
				for(int i = 0; i < n; ++i){
					swap(matrix[i][a], matrix[i][b]);
				}
			}	
			//incrementar 1 modulo10
			else if(instruction[0] =='i'){
				for(int i = 0; i < n; ++i){
					for(int j = 0; j < n; ++j){
						matrix[i][j] = (matrix[i][j] + 1) % 10;
					}
				}
			}
			//decrementar 1 modulo10
			else{
				for(int i = 0; i < n; ++i){
					for(int j = 0; j < n; ++j){
						--matrix[i][j];
						if(matrix[i][j] < 0){
							matrix[i][j] = 9;
						}
					}
				}
			}
		}
		//Imprimir matriz resultante
		if(t - 1 > 0)
			cout << "\n";
		cout << "Case #" << t << "\n";
		for(int i = 0; i < n; ++i)
		{
			for(int j = 0; j < n; ++j)
				cout << matrix[i][j];
			cout << "\n";
		}
	}
	cout << "\n";

}

