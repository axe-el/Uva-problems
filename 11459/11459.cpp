/*
11459
Serpientes y escaleras, los jugadores tiran en orden entonces vamos guardando en uin vector la posicion en la que se encuentran los 
jugadores se actualiza cada vez que tiran, ademas tenemos un vector para el tablero que nos indica las serpientes o escaleras que tiene el tablero
si un jugador cae en una posicion del tablerto donde halla cabeza de serpiente o principio de escalera su posicion se actualiza acorde.

*/
#include <bits/stdc++.h>

using namespace std;



int main(void){


	int Casos;
	cin >> Casos;

	while(Casos--){
	    
	    //the number a of players, the number b of snakes or ladders, and the number c of die rolls
		int a,b,c;
		cin >> a >> b >> c;

        //no more than 1000000 players
    	vector<int> positions(1000000, 1);
    	vector<int> board(101, 0);
	
		//Leemos la escalera o serpiente
		for(int i = 0; i < b; ++i){
			int top,bottom;
			cin >> bottom >> top;
			board[bottom] = top;	
		}
		
		
		int winner = -1;
		// Tiradas de dados
		for(int i = 0; i < c; ++i){
		    
		    //Dado
			int number;
			cin >> number;
			if(winner == -1){
			    //Jugador numero
				int j = i % a;
				
				positions[j] += number;
				
				//Si hay una escalera o serpiente
				if(board[positions[j]]){
					positions[j] = board[positions[j]];
				}
                //SI llego a la casilla 100
				if(positions[j] >= 100){
					winner = j;
					positions[j] = 100;
				}
			}
		}
		// Printing information of each player.
		for(int i = 0; i < a; ++i){
			cout << "Position of player " <<  i + 1 << " is " << positions[i] << ".\n";
			positions[i] = 1;
		}
	}
	
}