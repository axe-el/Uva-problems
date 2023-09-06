/*
12545
suppose S = ”01??00” and T = ”001010”
1. change a ‘0’ in S to ‘1’
2. change a ‘?’ in S to ‘0’ or ‘1’
3. swap any two characters in S
Como podemos cambiar cualesquiera dos caracteres y no solo los que esten juntos, esto facilita las cosas
contamos el numero de 1s iniciales en S,T si S tiene mas 1s que T the transition is impossible,output ‘-1’ instead.(ya que no podemos transformar
1 a 0), al mismo tiempo contamos las transformaciones de ? a 0 o 1, contar el numero de 0 incorrectos y 1 incorrectos, la respuesta es 
igual al número de ? + max (el número de ceros desalineados, el número de unos desalineados).
*/

#include <bits/stdc++.h>
using namespace std;


int Transform( const string &S, const string &T) {
    int q1 = 0, q0 = 0, i10 = 0, i01 = 0;
    
    int a1 = 0, b1 = 0;
    for (int i = 0; i < S.size(); i++) {
        
        if (T[i] == '1'){ 
            b1++;
        }        
        
        if (S[i] == '1'){ 
            a1++;
            if (T[i] == '0'){ 
                i10++;
            }    
        }
        else if (S[i] == '0') {
            if (T[i] == '1'){ 
                i01++;
            }    
        }
        else if (S[i] == '?') {
            if (T[i] == '0'){ 
                q0++;
            }    
            if (T[i] == '1'){ 
                q1++;
            }    
        } 

    }
    if (a1 > b1){ 
        return -1;
    }    
    int dist = q0 + q1 + max(i10,i01);
    return dist;
}
int main() {
	int C;
	cin >> C;
	for(int casos=1; casos<=C; casos++){
		string S,T;
		cin >> S;
		cin >> T;
		cout << "Case " << casos << ": " << Transform(S,T) << endl;
	}
	return 0;
}