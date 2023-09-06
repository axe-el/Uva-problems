/*
13012
Me dan un entero T , luego me dan 5 numeros, cuantos de esos 5 numeros son iguales a T 
(nivewl 3)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int T,X;
    while(cin >> T){
        int ans = 0;
        for(int i=0; i < 5 ; i++){
            cin >> X ;
            if( X == T ){
                ans = ans+1;
            }
        }
        cout << ans << endl;
    }
}