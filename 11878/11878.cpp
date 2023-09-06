/*
11878
Each question (together with the answer computed by your younger brother) is formatted either as a+b = c or a−b = c,
where a and b are numbers prepared by the teacher (they are guaranteed to be non-negative integers not greaterthan 100), 
c is the answer computed by your younger brother and is either a non-negative integer not
greater than 200, or a single character ‘?’ (that means, he is unable to compute the answer).

Print a single integer in a line, the number of correct answers.

Usamos scanf para guardar los valores a,b,signo,resultado de forma facil, de ahi solo es cuestion de verificcar la operacion
*/

#include <stdio.h>

#include <cstdio>
#include <cstdlib>
using namespace std;

int main() {
	int a,b,total = 0;
	char res[1000], _char;
	while(scanf("%d%c%d=%s\n",&a, &_char, &b, res) == 4) {
        if (res[0] == '?'){ 
            continue;
        }    
        if(_char=='+'){
            if(a+b==atoi(res)){
                total++;
            }    
        }
        else if(_char=='-'){
            if(a-b==atoi(res)){
                total++;
            }    
        }
        
	}
	printf("%d\n",total);
	return 0;
}