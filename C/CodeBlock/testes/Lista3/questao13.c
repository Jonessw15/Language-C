#include <stdio.h>
#include <stdlib.h>

int main() {

    float numerador = 1, denominador = 5, resultado = 0;

    do {
        resultado = resultado + (numerador / denominador);
        numerador += 2;
        denominador += 5;
    } while (numerador <= 17);
    printf("%f", resultado);
}
