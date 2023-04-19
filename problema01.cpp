//Si enumeramos todos los números naturales debajo de 10 que son múltiplos de 3 o 5, obtenemos 3, 5, 6 y 9. La suma de estos múltiplos es 23.
//Encuentra la suma de todos los múltiplos de 3 o 5 por debajo de 1000.

#include <iostream>

using namespace std;

int main() {

    int res = 0;

    for (int i = 0; i < 1000; i++) {

        int m3 = i % 3;
        int m5 = i % 5;

        if ((m3 == 0 || m5 == 0)) {
            res = res + i;
        }

    }
    cout << res << endl;

    return 0;
}