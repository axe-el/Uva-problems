//12696 me dan las medidas de una maleta de mano para avion y peso

//Cabin baggage should have a maximum length of 56 cm, width of 45 cm and depth of 25
//cm or the sum of all 3 sides (length+width+depth) should not exceed 125 cm. Its weight
//must not exceed 7 kg.
// Reviso si cada maleta cumple las medidas y al final imprimo el numero de maletas que cumplieron

#include <bits/stdc++.h>
using namespace std;


int main() {
    double length,width,depth,weight;
    int allowed, testCases, total=0;
    cin >> testCases;
    while(testCases--){
        allowed=1;
        cin >> length >> width >>depth >>weight;

        if((length+width+depth<=125.00)&&(weight<=7.00)){
            allowed=1;
        }
        else if(length>56.00 || width>45.00 || depth>25.00 || weight>7.00){
            allowed=0;
        }

        cout << allowed << endl;
        total=total+allowed;
    }
    cout << total << endl;


}
