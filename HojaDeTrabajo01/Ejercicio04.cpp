#include "Ejercicio04.h"

vector<string> Ejercicio04::generateParenthesis(int n, string combinacion, int abrir, in cerrar, std::vector<std::string>& resultado)
{
    if (abrir == 0 && cerrar == 0) {
        resultado.push_back(combinacion);
        return;
    }
    if (abrir > 0) {
        generateParenthesis(combinacion + "(", abrir -1, cerrar, resultado);
    }
    if (cerrar > abrir) {
        generatePatenthesis(combinacion + ")", abrir, cerrar -1, resultado);
    }
}

