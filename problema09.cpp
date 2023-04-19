//Un triplete pitagórico es un conjunto de tres números naturales, a b c, para los cuales,
//a^2 + b^2 = c^2
//Por ejemplo, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

//Existe exactamente un triplete pitagórico para el cual a + b + c = 1000.
//Encuentre el producto abc.

#include <iostream>

using namespace std;

int main(){

    int a, b, c;

    int res = 0;

    for (a = 1; a < 1000; a++){
        for (b = 1; b < 1000; b++){
            for (c = 1; c < 1000; c++){
                if (a + b + c == 1000){
                    if((a * a) + (b * b) == (c * c)){
                        res = a * b * c;
                        break;
                    }
                }
            }
        }
    }

    cout << res << endl;
}