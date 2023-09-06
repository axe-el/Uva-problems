/*
Empezamoc ocn la fformula

A_{n}= (A_{n-1}+A_{n+1}) / 2 - C_{n}

despejamos

2 * A_{n}= (A_{n-1}+A_{n+1}) - C_{n}

De aqui podemos sacar A_{n-1}

3 A_{n-1}=2 A_{n-2}+A_{n+1}-2 C_{n}-4 C_{n-1}

Si Continuamos llegamos a A_{1} igual a  

(n+1)A_{1} = n A_{0}+A_{n+1}-2 C_{n}-4 C_{n-1}-6 C_{n-2}- ... -2 n C_{1}
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#include <stdio.h>

int main() {
   
    int N;
    double a_0, a_n1, c_i , sum;   
    
    int T;
    cin >> T;
    while(T--) {
        sum = 0;

        cin >> N;
        cin >> a_0;
        cin >> a_n1;

        for(int i = 0; i < N; i++) {
            cin >> c_i;
            sum = sum + (N-i)* c_i;
        }

        printf("%.2lf\n",(N*a_0+a_n1-2*sum)/(N+1));
        if (T){ 
            printf("\n");
        }    
    }
    return 0;
}