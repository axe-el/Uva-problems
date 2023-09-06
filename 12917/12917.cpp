/*
12917
Es nivel 4 xd
Prop hunt! : Juego de steam
P = numero de "cazadores" , H = numero de "ladrones" , O = Numero de objetos para dizfrasarce
los ladrones toman el aspecto de un objeto, los cazadores disparan a los objetos si era un ladron, el ladorn muere,
si no era un ladron el cazador muere, bots asi que empiezan disparando a los objetos que no son ladrones, entonces el numero de
objetos que sobraron (#objetos - #ladrones) sera el numero de cazadores que mueran , si mueren todos ganaron los ladrones
caso contrario gananron los cazadores.
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    int P,H,O;
    while(cin >> P >> H >> O){
        int dies = O-H;     
        if( P - dies <= 0){
            cout << "Props win!" << endl;    
        }
        else{
            cout << "Hunters win!" << endl;    
        }
    }
}