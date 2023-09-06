/*
1121
Imprimir 0 si no hay subsecuencia 
Empezamos con el primer digito en la subsecuencia, vamos sumando los numeros de la derecha si es menor, si llegamos al resultado
o nos pasamos se guarda temporalmente el numero de elementos con los que se llega al resultado, se empiezan a quitar los numeros de la izquierda y llegamos al resultado en cuyo caso se 
guarda o tenemos que empezar a volver a sumar derecha.
*/
#include <bits/stdc++.h>

using namespace std;

int main(void)  { 
    int N,S;
    while( cin >> N >> S ){
        vector<int> Subsequence(N,0);
        for(int i=0; i<N; i++){
            
            cin >> Subsequence[i];
            
        }

        int left = 0, rigth = 0, sum = Subsequence[0], lowest = N + 2;
		while ( rigth <  N) {
			if (sum >= S){
				int temp = rigth - left + 1;
				if (temp < lowest){
					lowest = temp;
				}	
			}
			if (sum >= S && left < rigth ){
				sum = sum - Subsequence[left];
				left++;
			} 
			else if (sum < S){
				rigth++;
				if ( rigth < N){
					sum = sum + Subsequence[rigth];
				}	
			}
		}

		if (lowest == N + 2){
			lowest = 0;
		}
		
		cout << lowest << endl;

    }    

}    
