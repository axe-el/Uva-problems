/*
12136
Cada caso son dos
17:47 22:40
06:18 17:04
Lapsos de tiempo y tenemos que ver si el segundo overlaps con el primero, Leo con scanf y paso todo a minutos
de ahi checo el inicio del segundo lapso contra el final del primero y el final del segundo contra el inicio del primero
y listo el primero es el que no se mueve y si el segundo choca contra el primero imprimo Mrs Meeting.
*/
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main() {
    
    int T, C = 1;
    int start_W, start_w, end_W, end_w, start_M, start_m, end_M, end_m;

    scanf("%d", &T);
    
    while(T--) {
        
        scanf("%d:%d %d:%d", &start_W, &start_w, &end_W, &end_w);
        int Star_Wife = start_W*60 + start_w; 
        int end_Wife = end_W*60 + end_w;
        
        scanf("%d:%d %d:%d", &start_M, &start_m, &end_M, &end_m);
        int Star_Mee = start_M*60 + start_m; 
        int end_Mee = end_M*60 + end_m;

        if( end_Wife < Star_Mee || Star_Wife > end_Mee){
            cout <<"Case "<< C <<": Hits Meeting" << endl;
            
        }
        else{
            cout <<"Case "<< C <<": Mrs Meeting" << endl;
        }
        C = C+1;
    }
    return 0;
}