/*
13130
5 numeros y se debe de cumplir: 
ai + 1 = ai+1, 1 <= i <= 4
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a1,a2,a3,a4,a5;
    cin >> t;
    while(t--){
        cin >> a1 >> a2 >> a3 >> a4 >> a5;
        if( a2 == a1+1 && a3 == a2+1 && a4 == a3+1 && a5 == a4+1 ){
            cout << "Y" << endl;    
        }
        else{
            cout << "N" << endl;
        }
    }
    return 0;
}
