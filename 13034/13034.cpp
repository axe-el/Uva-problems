/*
13034

Cada Testcase es un renglon de 13 enteros si alguno de los 13 enteros es un 0 imprimo que no es Possible
resolver ese caso , si todos son diferentes de 0 imprimo que es posible 

*/

#include<bits/stdc++.h>
using namespace std;

#include <stdio.h> 

int main() {
	int T,X, C = 1;
	cin >> T;
	while (T--) {
		int Possible = 1;
		for (int i = 0; i < 13; i++){
			cin >> X;
			if( X == 0){
			    Possible = 0;    
			}
		}
		if( Possible ){
		    cout << "Set #" << C << ": Yes" << endl;   
		}
		else{
		    cout << "Set #" << C << ": No" << endl;   
		}
		C = C + 1;
	}
	return 0;
}