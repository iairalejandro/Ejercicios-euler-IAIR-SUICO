//La suma de los cuadrados de los primeros diez números naturales es,
//1^2 + 2^2 + ... + 10^2 = 385
//El cuadrado de la suma de los primeros diez números naturales es,
//(1 + 2 + ... + 10)^2 = 55^2 = 3025
//Por lo tanto, la diferencia entre la suma de los cuadrados de los primeros diez números naturales y el cuadrado de la suma es 3025 - 385 = 2640.
//Encuentra la diferencia entre la suma de los cuadrados de los primeros cien números naturales y el cuadrado de la suma.

#include <iostream>

using namespace std;
 
int main() {

    int n = 100;
	int cuadrado_suma;
	int resta;

    int suma_cuadrados = n*(n+1)*(2*n+1) / 6;
    int suma_naturales = n*(n+1) / 2;
	
    cuadrado_suma = suma_naturales * suma_naturales;
    resta = cuadrado_suma - suma_cuadrados;

    cout << resta << endl;


    return 0;
}
    
