//12243 - Flowers Flourish from France
//tautograma oracion cada palabra empieza con la misma letra,
//Tomo la primera letra en minuscula(Si es mayuscula la cambio a minuscula) cada que encuentro espacio reviso el siguiente caracter
//Pues sera el que diga si es tautograma o no
#include <iostream>
#include <string>

using namespace std;

int main(){
    string line;
    //Ultimo caracter es *
    while (getline(cin, line), line != "*"){
        //France for Flowers
        //letra = f
        char letra = tolower(line[0]);
        //Es o no un tautograma
        bool Tautograms = true;
        //Recorro la linea
        for (int i = 0; i < line.size(); ++i)
            //si llego a un espacio la siguiente caracter va a ser la letra
            if (line[i] == ' '){
                //si no estoy al final checar primera letra de cada palabra en minuscula debe ser iguala letra
                if (i + 1 < line.size() && tolower(line[i + 1]) != letra){
                    Tautograms = false;
                    break;
                }
            }
        //si fue o no fue tautograma
        if(Tautograms) cout << "Y\n";
	else cout << "N\n";
    }
}