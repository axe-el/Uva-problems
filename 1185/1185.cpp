/*
1185
determine the number of digits in the factorial of the number.

log(a*b) = log(a) + log(b)
log( n! ) = log(1) + log(2) + ........ +log(n)

floor() de log_10 + 1, de cualquier numero,da el
número de dígitos en ese número.

*/

#include<bits/stdc++.h>
#include <cmath>
using namespace std;

int solve(int num){
    
   if (num < 0){
      return 0;
   }
   else if (num == 1){
      return 1;
   }

   double digits = 0;
   for (int i=2; i<=num; i++){
      digits = digits + log10(i);
   }
   return floor(digits) + 1;
}

int main() {
 
    int t, x;

 
    cin >>t;
 
    while(t--) {
        cin >> x;
        cout<< solve(x)<< endl;
     }
 
} 
