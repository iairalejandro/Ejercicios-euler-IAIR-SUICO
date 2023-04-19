//Cada nuevo término en la sucesión de Fibonacci se genera sumando los dos términos anteriores. Al comenzar con 1 y 2, los primeros 10 términos serán:
//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//Al considerar los términos en la sucesión de Fibonacci cuyos valores no superan los cuatro millones, encuentre la suma de los términos de valor par.

#include <iostream>

using namespace std;
 
int main() {
	
	int sum = 0;
 
	int n1 = 1;
	int n2 = 1;
	int fib = 0;

	while (n2 < 4000000) {
		if (n2 % 2 == 0) {
			sum += n2;
        }
        fib = n1 + n2;
		n1 = n2;
		n2 = fib;
	}
 
	cout << sum;
 
	return 0;
}