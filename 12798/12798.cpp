/*
12798
VAMOS LEYENDO LOS DATOS EN CADA RENGLON TODOS LOS NUMEROS (GOLES) DE ESE JUGADOR DEBEN SER MAYOR A 0
SI UNO ES 0, YA NO SE AGREGA AL RESULTADO FINAL
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,m,x;
    
    while( cin >> n >> m ){
        
        int count =0;
        
        for(int i=0; i<n; i++){
            
            bool goal=false;
            
            for(int j=0; j<m; j++){
                cin>>x;
                
                if(!x){
                    goal=true;
                }
                
            }
            
            if(!goal){
                count++;
            }
        }
        cout<< count <<endl;
    }
    return 0;
}