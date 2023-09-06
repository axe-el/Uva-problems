/*
11678
Contamos el numero de cartas unicas de Alice, despues contamos las cartas unicas de betty, pero tambien tenemos que checar
si la carta ya la tiene Alice porque aunquqe sea posible para betty intercambiarla si Alice ya la tiene no sirve de nada
, despues una vez tenemos el numero de cartas que las dos pueden intercambiar tomamos el numero menor pues si alice puede intercambiar
5 cartas y betty 7 , solo van a intercambiar 5.
*/
#include <bits/stdc++.h>
using namespace std;

int main(void){

	int A,B;
	int cards_A, cards_B;

	while(cin >> A >> B && A && B){

	    map<int, bool> unique_cardsA;
	    map<int, bool> unique_cardsB;
	    
        int Trade_cards_A = 0;
        int Trade_cards_B = 0;
		
		for(int i=0; i < A ; i++){

			cin >> cards_A;
			
			if(unique_cardsA.find(cards_A) == unique_cardsA.end()){
			    
				Trade_cards_A = Trade_cards_A + 1;
				unique_cardsA[cards_A] = true;
				
			}
		}
		
		for(int j=0; j < B ; j++){

			cin >> cards_B;
			
			if(unique_cardsB.find(cards_B) == unique_cardsB.end() ){
		        if(unique_cardsA.find(cards_B) != unique_cardsA.end()){
			        Trade_cards_A = Trade_cards_A - 1;
			    }
			    else{
    			    Trade_cards_B = Trade_cards_B + 1;
                    unique_cardsB[cards_B] = true;    
			    }
				
                
			}
		    

		}

		cout <<"->"<<min(Trade_cards_A, Trade_cards_B) << endl;
		unique_cardsA.clear();
		unique_cardsB.clear();
	}

}