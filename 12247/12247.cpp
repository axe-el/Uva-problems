/*
12247
Jollo is a simple card game . It is played between two players with a normal deck of 52 cards.

The game is composed of three rounds, played in a best-of-three series (a player must win two rounds to win the game)

 At the beginning of the game the deck is shuffled and each player is given
a hand of three cards. In each round the players show one card to each other and the player with the
highest card wins the round. The cards shown in a round are discarded

A,B,C -> CARTAS DE LA PRINCESA
X,Y -> Cartas del principe
Podemos darle cualquier tercer carta al principe para asegurar que siempre gane, imprimir la carta que le debemos de darle
o -1 en caso de que no pueda ganar sin importar la carta que se le de

Dadas 3,3 cartas A,B,C / X,Y,Z -> hay 6 posibbles juegos
A X , B Y , C Z
A X , B Z , C Y
A Y , B X , C Z
A Y , B Z , C X
A Z , B Y , C X
A Z , B X , C Y
For: para cada carta de las 52, si ya esta en juego saltamos a la siguiente, si no esta en juego
comprobamos que para los 6 posibles juegos el principe va a ganar(win two rounds), si acabamos el For:
y no pudo ganar los 6 juegos con ninguna de las cartas -1.
*/
#include <bits/stdc++.h>

using namespace std;


int main() {
    
    int A, B, C, X, Y;
    
    while(cin >> A && A){
        
        cin >> B >> C >> X >> Y;    

        vector<bool> available(52,false);
        available[A] = available[B] = available[C] = available[X] = available[Y] = true;
        
        bool found = false;
        
        for(int card = 1; card <= 52; card++) {
            
            if(available[card]){    
                continue;
            }
            
            int w = 0;
            if( X > A){  
                w++;
            }    
            if( Y > B){  
                w++;
            }    
            if( card > C){  
                w++;
            }    
            if(w < 2){ 
                continue;
            }
            
            w = 0;
            if( X > A){  
                w++;
            }    
            if( card > B){  
                w++;
            }    
            if( Y > C){  
                w++;
            }    
            if(w < 2){ 
                continue;
            }
            
            w = 0;
            if( Y > A){  
                w++;
            }    
            if( X > B){  
                w++;
            }    
            if( card > C){  
                w++;
            }    
            if(w < 2){ 
                continue;
            }
            
            w = 0;
            if( Y > A){  
                w++;
            }    
            if( card > B){  
                w++;
            }    
            if( X > C){  
                w++;
            }    
            if(w < 2){ 
                continue;
            }
            
            w = 0;
            if( card > A){  
                w++;
            }    
            if( Y > B){  
                w++;
            }    
            if( X > C){  
                w++;
            }    
            if(w < 2){ 
                continue;
            }
            
            w = 0;
            if(card > A){  
                w++;
            }    
            if( X > B){  
                w++;
            }    
            if( Y > C){  
                w++;
            }    
            if(w < 2){ 
                continue;
            }
            
            found = true;
            cout <<  card << endl;
            break;
        }
        if(!found){  
            cout <<  "-1" << endl;
        }    
    }
    return 0;
}