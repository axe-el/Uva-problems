/*
1709
Ocupamos la formula para ver la mayor baja en costos, guardamos el mayor costo en un periodo y vamos calculando la baja con todos los demas que vallamos
calculando quedandonos con la perdida mas grande entre dos periodos y en caso de calcular un periodo mas grande que el maximo actual lo guardamos ahora
como el maximo, en este caso no habria decline porque este nuevo periodo es mayor.

Your output should have an absolute or relative error of at most 10−6


*/

#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main() {
	int p,a,b,c,d,n;
	
	while (cin >> p >> a >> b >> c>> d>> n ) {
	    
		double max_decline = 0;
		double max_k = p * (sin((a + b)) + cos((c + d)) + 2);
		
		for (int k = 2; k <= n; k++) {
			double price_k = p * (sin((a * k + b)) + cos((c * k + d)) + 2);
				if (max_k > price_k) {
					if(max_decline< max_k - price_k){
						max_decline= max_k- price_k;
					}
				} 
				else {
					max_k = price_k;
				}
		}
		printf("%.8lf\n", max_decline);
	}
	return 0;
}