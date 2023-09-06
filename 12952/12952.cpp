/*
12952
Tri du , nos dan dos cartas para maximizar las oportunidades de ganar la tercera carta debe ser la mayor de las dos que nos dieron
*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    while( cin >> a >> b )
    {
        if(a>=b){
            cout << a << endl;
        }    
        else{
            cout << b << endl;
        }    
    }
    return 0;
}