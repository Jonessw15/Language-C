#include <stdio.h>
#include <stdlib.h>

int main() {

    float numerador = 17, denominador = 7, resultado = 0;

    do {
        resultado = resultado + numerador / denominador;
        numerador -= 2;
        denominador += 2;
    } while (numerador >= 7);
    printf("%f", resultado);
}
