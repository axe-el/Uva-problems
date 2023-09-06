/*
11278  

Mapeamos cada  tecla del estándar a una tecla de dvorak e imprtimimos acorde.

*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    string Qwerty  =" `\\1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:ZXCVBNM<>\"?";
    string Dvorak =" `\\123qjlmfp/[]456.orsuyb;=789aehtdck-0zx,inwvg'~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK)ZX<INWVG_\"";
    
    string input;
    
    while(getline(cin,input)){

        for(int i=0; i< input.size() ; i++){
            
            for(int j=0; j< Qwerty .size(); j++){
                
                if(input[i]== Qwerty[j]){
                    
                    cout<< Dvorak [j];
                    break;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}