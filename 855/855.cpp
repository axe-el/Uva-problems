//855 En un grid me dan N pares de coordenadas, imprimir el punto que minimiza distancia a todos los puntos
// Mediana de los pares de coordenadas
#include <bits/stdc++.h>

using namespace std;

int main(void){
	
	//NUmero casos
	int testCases;
	cin >> testCases;

	while(testCases--){

		//numero de filas, columas del grid y numero de puntos
		int friends;
		int streets;
		int avenues;
		cin >> streets >> avenues >> friends;
		
		//Vector para filas y columnas
		vector<int> streetPoints(friends);
		vector<int> avenuePoints(friends);

		//Leer los pares de coordenadas y guardarlos en vector
		for(int i = 0; i < friends; ++i){
			cin >> streetPoints[i] >> avenuePoints[i];
		}
		
		//Ordenar
		sort(streetPoints.begin(), streetPoints.end());
		sort(avenuePoints.begin(), avenuePoints.end());

		//Mitad
		int i = (friends >> 1) - 1;
		if(friends & 1){
			++i;
		}

		cout << "(Street: " << streetPoints[i] << ", Avenue: " << avenuePoints[i] << ")\n"; 
	}

	return 0;
}

