/*
12643
N-rounds tennis tournament a group of 2N ,each player is assigned a number between 1 and 2N,
 first round matches are numbered  1, 2, . . . , 2^N-1 : match k will have player 2 · k − 1 vs. player 2 · k,
N indicates the total number of rounds in the tournament (1 ≤ N ≤ 20), and X, Y represent two seeding numbers at the first round

For each test case, output a line with one integer indicating the round number in which players may have a match in a tournament with N rounds

3 2 5 = 3

Vamos dividiendo entre dos (+1 para que los lugares correspondan) 1,2 -> 1 / 3,4 -> 2 / 5,6 -> 3
cuando los numeros sean los mismos significa que se enfrentaron en el round anterior(ambos ganaron por eso ambos mismo numero)

*/
#include <iostream>
using namespace std;

int main(){
    int N,X,Y;
    while(cin >> N >> X >> Y){
        int res = 1;
        for(int i=0;i<N;i++){
            X=(X+1)/2;
            Y=(Y+1)/2;
            if(X==Y){
                break;
            }
            else{
                res = res + 1;            
            }
        }
        cout <<res << endl;
    }

}