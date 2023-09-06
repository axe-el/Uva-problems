/*
10363
Te dan un tablero de Gato, tienes que ver si es factible,
checo si gano X o O, los dos no se pueden, Checar el numero de X y numero de O, siempre empieza X,
guardo el tablero de una matriz reviso filas y columnas y diagonales para X y para O, para ver quien gano
y a la hora de leer el tablero cuento numero de X y O.
*/
#include <bits/stdc++.h>

using namespace std;

char ch,mat[3][3];
    
bool winning(char x, char board[3][3])  {  
   
   if( board[0][0] == x && board[1][0] == x && board[2][0] == x ){
       return true;
   } 
   if( board[0][1] == x && board[1][1] == x && board[2][1] == x ){
       return true;
   }     
   if( board[0][2] == x && board[1][2] == x && board[2][2] == x ){
       return true;
   }
   
   if(board[0][0] == x && board[0][1] == x && board[0][2] == x){
       return true;
   }
    if(board[1][0] == x && board[1][1] == x && board[1][2] == x){
       return true;
   }
    if(board[2][0] == x && board[2][1] == x && board[2][2] == x){
       return true;
   }

    if ( board[0][0] == x && board[1][1] == x && board[2][2] == x){
        return true;         
    }  
    if ( board[0][2] == x && board[1][1] == x && board[2][0] == x){
        return true; 
    }    
    
    return false;  
}  
    
    
int main(void)  { 
    
    char mark, board[3][3];
    int casos;
    cin >> casos;
    
    while( casos--)  {
        int X=0,O=0;
        for (int i = 0; i < 3; i++){  
            for (int j = 0; j < 3; j++){
                cin >> board[i][j];
                
                if (board[i][j] == 'X'){ 
                    X++;
                }    
                else if (board[i][j] == 'O'){ 
                    O++;
                }    
            }    
        }
    
        if(!( X == O || X == O+1)){
            cout <<"no"<< endl;
        }    
        else if(winning('X',board) && winning('O',board)){
            cout <<"no"<< endl;
        }
        else if(winning('X',board) && X-O != 1){
            cout <<"no"<< endl;
        }
        else if(winning('O',board) && X-O != 0){
            cout <<"no"<< endl;
        }
        else{
            cout <<"yes"<< endl;
        } 
    }
} 