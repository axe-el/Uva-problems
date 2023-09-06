/*
12614

Simplemente tenemos que encontrar el número máximo entre las entradas dadas.
No necesitamos calcular bitwise AND, el problema dice que la operación bit a bit se realizará en los números de tarjeta. Pero no necesitamos realizar operaciones bit a bit. 
El problema dice: "Por favor, dígale la cantidad máxima que puede ganar con este juego de cartas". Esto significa que, obviamente, debemos elegir el número más grande porque queremos maximizar la cantidad (realizar bit a bit & (y) con el número más grande en lugar de uno pequeño) 

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, C = 1, N,X;
    cin >> T;
    
    while(T--) {
        cin >> N;
        
        int ans = 0;
        
        for(int i=0 ; i < N ; i++){
            
            cin >> X;
            ans = max( ans, X);
        }
        
        cout << "Case " << C << ": " << ans << endl;
        C = C + 1;
    }
    return 0;
}