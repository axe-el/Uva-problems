//11040 LLebar cada ladrillo en blanco , para cada ladrillo su numero = la suma de os dos ladrillos de abajo
//Se van resolviendo ecuaciones de 3 incognitas

//  a1
// b1 b2
//c1 c2  c3

// a1 = b1-b2
// b1 = c1+c2
//b2 = c2 + c3

//c2 =b2 - c3
//c2 = a1-b1-c3
//c2 = a1 -c1+c2-c3
//2 c2 = a1-c1-c3

// a1 = 255
// c1=54,c3=67
// c2 = (a1-c1-c3)/2
// b1 = c2+c1
// b2 = c2+c3
#include <bits/stdc++.h>

using namespace std;

int main(void){

	//Numero de casos
	int testCases;
	//LA piramide siempre misma dimension 9 filas, la i-esima fila tine i ladrillos, de arriba hacia abajo
	int pyramid[10][10];

	//Numero casos
	cin >> testCases;
	while(testCases--){
		//Leo la piramide 
		for(int i = 0; i < 9; i += 2){
			for(int j = 0; j <= i; j += 2){
				cin >> pyramid[i][j];
			}
		}

		//Empezamos a llenar de abajo hacia arriba	
		for(int i = 8; i > 0; i -= 2){
			for(int j = 0; j < i;  j += 2){
				pyramid[i][j + 1] = (pyramid[i - 2][j] - pyramid[i][j] - pyramid[i][j + 2]) >> 1;  
				pyramid[i - 1][j] = pyramid[i][j] + pyramid[i][j + 1];
				pyramid[i - 1][j + 1] = pyramid[i][j + 1] + pyramid[i][j + 2];
			}
		}

		//Imprimimos la piramide
		for(int i = 0; i < 9; ++i){
			for(int j = 0; j <= i; ++j){
				cout << pyramid[i][j];
				if(j < i)
					cout << " ";
			}
			cout << endl;
		}

	}

}

