/*
11786 Es como el problema de los parentesis donde para cada "(" , tiene que haber un despues ")"
(  [ ] {} )
Se resuelve con una pila, cada que se encuentra un izquierdo "(" se guarda en la pila y se saca hasta encontrar un derecho ")"
En este caso es mas simple, pues no nos preocupamos por inconguencias tipo (} ,  ( } )
un caracter '\\' seria el izquiero y el '/' el derecho , si primero sucede un '/' derecho se ignora siempre debe haber un izquierdo antes
Entonces vamos midiendo el agua para cada par de estos sin importarnos el nivel o profundidad, se le toda la cadena y se guarda en la pila
el indice en el que se encontro el izquierdo, despues cuando se encuentra su derecho se resta el indice del derecho con el de la pila,
la pila para asegurar que el indice que se resta sea el izquierdo de este derecho.
*/

#include <iostream>
#include <stack>
using namespace std;

int main() {
    //n casos de prueba
    int n;
    cin >> n;

    //para cada caso
    while(n--) {
        
        //Leo el caso
        string Mountain;
        cin >> Mountain;

        //Inicializo todo, total de awa y el stack    
        int water = 0;
        stack<int> pila;

        //Recorrro los elementos del string
        for(int i = 0; i < Mountain.size(); ++i) {
            //Bajada guardo en la pila en que indice(i) se encontro
            if (Mountain[i] == '\\'){
                pila.push(i);
            }
            //Subida de la bajada es decir \/ se cerro , sacamos de la pila el que se guardo y calculamos awa de este pico
            else if(Mountain[i] == '/' && !pila.empty()) {
                water = water + i - pila.top();
                pila.pop();
            }
        }
        cout << water << endl;
    }
}