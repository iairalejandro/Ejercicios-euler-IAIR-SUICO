//La suma de los números primos por debajo de 10 es 2 + 3 + 5 + 7 = 17.
//Encuentra la suma de todos los números primos por debajo de dos millones.

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
    int limite = 2000000;
    long long sum = 0;

    for (int i = 2; i < limite; i++) {
        if (esPrimo(i)) {
            sum = sum + i;
        }
    }

    cout << sum << endl;

    return 0;
}