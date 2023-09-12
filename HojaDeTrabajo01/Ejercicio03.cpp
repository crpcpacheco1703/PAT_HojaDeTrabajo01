#include "Ejercicio03.h"

bool Ejercicio03::isPowerOfTwo(int n)
{
    if (n == 1) {
    return true;
    }
    else if (n < 1 || n % 2 ! = 0) {
        return false;
    }
    else {
        return isPowerOfTwo(n / 2);
    }
}
