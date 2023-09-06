/*
584

A single bowling game consists of ten frames. The object in each frame is to roll a ball at ten
bowling pins.For each frame, a bowler is allowed a maximum of two rolls to knock down all ten pins. If the
bowler knocks them all down on the first attempt, the frame is scored as a strike. If the bowler does
not knock them down on the first attempt in the frame the bowler is allowed a second attempt to knock
down the remaining pins. If the bowler succeeds in knocking the rest of the pins down in the second
attempt, the frame is scored as a spare.

The score for a bowling game consists of sum of the scores for each frame. The score for each
frame is the total number of pins knocked down in the frame, plus bonuses for strikes and spares. In
particular, if a bowler scores a strike in a particular frame, the score for that frame is ten plus the sum
of the next two rolls. If a bowler scores a spare in a particular frame, the score for that frame is ten plus
the score of the next roll. If a bowler scores a strike in the tenth (final) frame, the bowler is allowed
two more rolls. Similarly, a bowler scoring a spare in the tenth frame is allowed one more roll.
The maximum possible score in a game of bowling (strikes in all ten frames plus two extra strikes
for the tenth frame strike) is 300.

Dadas las reglas pasamos de primera la simbologia del juego a puntos en un vector
1 0 1 / 2 2 X 3 3 X 1 / 3 / X 1 2
De ahi recorremos el vector y calculamos los puntos de acuerdo a las reglas, lo dificil es entender las reglas
y saber que hacer en caso del strike y spare

*/

#include <bits/stdc++.h>

using namespace std;

int main(void) {
    
    int result,frames;
    string line;
    while (getline(cin, line) and line[0] != 'G'){
	
        result = 0; 
        frames = 0;
        vector<int> score;
        
        for (int i = 0, sz = line.size(); i < sz; i++) {
            if (line[i] == ' '){ 
                continue;
            }    
      
            else if (line[i] == 'X'){
                score.push_back(10);
            }    
            else if (line[i] == '/'){
                score.push_back(10 - score[score.size()-1]);
            }    
            else{
                score.push_back(line[i] - '0');
            }    
        }
    
        int i=0;
        while (frames != 10){
            //Strike
            if (score[i] == 10) {
                result += score[i] + score[i+1] + score[i+2];
                frames++;
            }
            //Spare
            else if (score[i] + score[i+1] == 10) {
                result += score[i] + score[i+1] + score[i+2];
                frames++;
                i++;
            }
            //Tiro normal
            else {
                result += score[i] + score[i+1];
                frames++;
                i++;
            }
            i++;
        }
        cout << result << endl;
    }
   
}