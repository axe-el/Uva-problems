/*
12658
Input:
.*..***.***.
.*....*...*.
.*..***.***.
.*..*.....*.
.*..***.***.
output:
123
Hago una matriz para guardar los caracteres y despues para identificar los numero,
no hace falta recorrer todo el numero, solo ver las caracteristicas principales que indican que se trata de un numero u otro
si es 1 la casilla numeros[0][i] con i=0,4,8 sera "."" , si es 2 la casilla numeros[3][i] con i=0,4,8 sera "*", otro caso 3
*/

#include <bits/stdc++.h>
using namespace std;


#include<stdio.h>
#include<string.h>
int main(){
    
    int n;
    cin >> n;
    char numeros[5][4*n];
    for(int i=0; i<5 ; i++){
        for(int j=0; j<4*n ; j++){
            cin >> numeros[i][j];
        }
    }
    
    for(int i = 0;i<4*n;i+=4){
            if(numeros[0][i]=='.'){ 
                cout << 1;
            }
            else if(numeros[3][i] == '*'){ 
                cout << 2;
            }
            else{ 
                cout << 3;
            }
    }
    puts("");
}