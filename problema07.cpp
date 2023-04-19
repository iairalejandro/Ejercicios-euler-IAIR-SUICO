//Al enumerar los primeros seis números primos: 2, 3, 5, 7, 11 y 13, podemos ver que el sexto primo es 13.
//¿Cuál es el número primo 10001?

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

    int cont = 2;
    
    for(int j = 5; ; j++) {
        if(esPrimo(j)) {
            
            cont++;
        }

        if(cont == 10001) {
            
            cout << j;

            return 0;
        }
    }
}