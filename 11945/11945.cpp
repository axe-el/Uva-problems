/*
11945
Sumamos todos sus ingresos, lo dividimos entre los 12 meses para saber estimado , dividimos entre mil para saber
donde colocar la "," imprimimos acorde lo solicitan
*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    int T;
    scanf("%d",&T);
    for(int i=0 ; i<T ; i++){
        
        double sum=0,X;
        for(int j=0 ; j<12 ; j++){
            scanf("%lf",&X);
            sum = sum + X;

        }
        double average = sum/12.0;
     
        long long mil = average/1000.0;
        double ans = average - mil * 1000;

        if( mil!=0){
            printf("%d $%lld,%.2lf\n",i+1,mil,ans);
        }
        else{
            printf("%d $%.2lf\n",i+1,ans);
        }    
            
    }
}
