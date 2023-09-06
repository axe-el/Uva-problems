/*
320
Vamos uno a uno en la oracion de movimientos Vemos si es norte, sur, este u oeste nos "movemos" y marcamos
esto lo vamos a hacer con una matriz para el tablero inicializada en ceros, al final imprimimos la matriz donde halla un 1 
imprimimos X otro caso .
*/

#include<bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


int main() {
    
    int x, y;
    
    string S;
    
    int T;
    cin >> T ;
    
    int caso = 1;
    while( T-- ){
        
        vector <vector<int>> bitmap( 32,vector<int>( 32,0));
        
        cin >> x >> y;
        
        cin >> S;

        for(int i = 0; i < S.size() ; i++) {
            
            if(S[i] == 'E') {
                bitmap[x][y-1] = 1;
                x = x+1;
            }
            if( S[i] == 'N') {
                bitmap[x][y] = 1;
                y = y + 1;
            }
            if( S[i] == 'W') {
                bitmap[x-1][y] = 1;
                x = x -1;
            }
            if( S[i] == 'S') {
                bitmap[x-1][y-1] = 1;
                y = y -1;
            }
        }
        
        cout << "Bitmap #" << caso << endl;
        caso = caso + 1 ;
        for(int i = 31; i >= 0; i--) {
            for(int j = 0; j < 32; j++) {
                if( bitmap[j][i] == 1){
                    cout << "X";    
                }
                else{
                    cout << ".";                    
                }

            }
            cout << endl;
        }
        cout << endl;

    }
    return 0;
}
