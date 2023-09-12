#include "Ejercicio02.h"

bool Ejercicio02::isPalindrome(string& s, int inicio, int fin)
{
    if (inicio >= fin){
        return true;
    }
    else if (s[inicio] == s[fin]){
        return isPalindrome(s, inicio + 1, fin - 1);
    }
    else {
        return false;
    }
}
bool isPalindrome(const std::string& s) {
    return isPalindrome(s, 0, s.size() - 1);
}

