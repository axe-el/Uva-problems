//11581
//PAra el grid g(siempre 3x3) creamos la funcion f(g) 
//Podemos crear una función H(g) que tome el grid g, aplane las filas y obtenga el entero asociado 
//De aqui vemamos que la funcion kg(g) se 'detendra' ssi todos los valores de g son 0, esto es H(g)=0 
//Lo que ocurre es que la función f(g) seguira transformando el grid g a g'!=g siempre que haya un 1 en g. 
// hasta que todos los valores de g son 0.

#include <iostream>
#include <map>
using namespace std;

//Calculo de la funcion f(g) para cada celda de grid
void f(int grid[3][3]) {
	int temp_grid[3][3], sum;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sum = 0;
			if (i > 0){ 
				sum += grid[i-1][j];
			}
			if (j > 0){ 
				sum += grid[i][j-1];
			}
			if (i < 2){ 
				sum += grid[i+1][j];
			}
			if (j < 2){ 
				sum += grid[i][j+1];
			}
			temp_grid[i][j] = sum % 2;
		}
	}

	//Transformamos la matriz grid a traves de f(g)
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			grid[i][j] = temp_grid[i][j];
		}
	}
}

//Aplanamos la matriz grid por filas y tomamos el valor obtenido
int H(int grid[3][3]) {
	int value = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			value = value * 10 + grid[i][j];
		}
	}	
	return value;
}

int main(void){
	int cases, index, value, h;
	int grid[3][3];

	cin >> cases;
	for(int c=0; c < cases; c++){
		index = 0;

		//Lectura de la matriz
		for (int i = 0; i < 3; i++) {
			cin >> value;
			for (int j = 2; j >= 0; j--) {
				grid[i][j] = value % 10;
				value /= 10;
			}
		}
		//transformamos matriz grid
		while( (h=H(grid)) ){
			f(grid); 
			index++; 
		}

		cout << index -1 << endl;
	}

}