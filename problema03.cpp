//Los factores primos de 13195 son 5, 7, 13 y 29.
//¿Cuál es el mayor factor primo del número 600851475143?

#include <iostream>

using namespace std;

bool esPrimo(int n) {
    if (n == 2 || n == 3) {
        return true;
    }

    if (n % 2 == 0) {
        return false;
    }

    for (int i = 3; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {

    long long n = 600851475143;
    long long i = 2;
    long long mayorFactor = 1;

    while(n > 1) {
        if(n % i == 0) {
            if(esPrimo(i)) {
                mayorFactor = i;
            }
            n = n / i;
        } else {
            i++;
        }
    }

    cout << mayorFactor << endl;

    return 0;
}