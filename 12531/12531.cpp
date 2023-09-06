/*
12531
La manecilla de minutos de muede cada minutos
La manecilla larga se mueve 1 vez cada 12 minutos
Entre cada hora son 5 marcas , 60 marcas en el reloj, empiezan igual en 12
360 grados, 60 marcas.

Todos los angulos que si se dan en el reloj son divisibles entre 6 

Minutos	      Angulo
1 minute	6o
2 minutes	12o
3 minutes	18o
4 minutes	24o
5 minutes	30o
6 minutes	36o
7 minutes	42o
8 minutes	48o
9 minutes	54o
10 minutes	60o
11 minutes	66o
12 minutes ( Se mueve la de los minutos y se mueve la de las horas)

*/
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main ()
{
    int  Angle;
    while ( cin >> Angle){
        if( ( Angle%6==0 ) ){
            cout << "Y" << endl;
            
        }
        else{
            cout << "N" << endl;
        }
    }          
    return 0 ;
}