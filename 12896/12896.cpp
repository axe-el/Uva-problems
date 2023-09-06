/*
12896 

Guardamos previamente las letras y simbolos del celular para cada numero de ahi solo es cuestion
de ver que numero se presiono y cuantas veces e imprimimos acorde

*/

#include<bits/stdc++.h>
using namespace std;


int main() {
    
    string cellphone[10];
    
    cellphone[0] = " ";    
    cellphone[1] = ".,?\"";
    cellphone[2] = "abc";
    cellphone[3] = "def";
    cellphone[4] = "ghi";
    cellphone[5] = "jkl";
    cellphone[6] = "mno";
    cellphone[7] = "pqrs";
    cellphone[8] = "tuv";
    cellphone[9] = "wxyz";
 
	int T, N ;
	cin >> T;
	while (T--) {
	    cin >> N;
	    
	    vector< int > number(N,0);
	    vector< int > press(N,0);
	    
        for(int i=0;i<N;i++){
            cin>> number[i];
        }    
        for(int i=0;i<N;i++){
            cin>> press[i];
        }  
        
        for(int i=0;i<N;i++){
            cout<< cellphone[ number[i] ] [ press[i]-1];
        }    
        cout<<endl;
	}
	return 0;
}