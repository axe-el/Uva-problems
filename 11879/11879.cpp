/*
11879
Theorem: If you drop the last digit d of an integer n (n ≥ 10), subtract 5d from the
remaining integer, then the difference is a multiple of 17 if and only if n is a multiple of 17.

Me dan un numero y tengo que verificar el theorema 

Entero n (1 ≤ n ≤ 10**100) entonces ocupo char S[110] para almacenarlo

*/

#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include <stdio.h>
using namespace std;

int main() {
    char S[110];    
    while(gets(S)) {
        if ( S[0] == '0'){
            break;
        }
        
        int res = 0;
        for (int i = 0; S[i] ; i++){
            res = res * 10 + S[i] - '0';
            res %= 17;
        }        

        if( res==0){
            cout << "1" << endl;
        }    
        else{
            cout << "0" << endl;
        }       
    }
    
}