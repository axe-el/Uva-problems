/*
11683
Definimos solo una variable que se incrementa cada vez que cualquier capa detecta una nueva escultura láser.
*/

#include <iostream>

using namespace std;

int main(){
    int height, lenght;
    int currentHeight;
    int cuts;

    // The end of the input is indicated by a line that contains only two zeros, separated by a blank space.
    while (cin >> height >> lenght){
        
        if (!height && !lenght){
            break;
        }

        cuts = 0;

        // C integers Xi each one indicating the final height, in milimeters of the block between the positions i and i + 1
        for (int i = 0; i < lenght; ++i){
            cin >> currentHeight;
            //// If the last read height is lower than the current then add to cuts the difference.
            if (currentHeight < height){
                cuts += (height - currentHeight);
                height = currentHeight;
            }
            height = currentHeight;

        }
        cout << cuts << endl;
    }
    return 0;
}