#include <stdio.h>
#include <math.h>

float somatorio(float);

int main() {

    float soma = 0;
    printf("%f", somatorio(soma));

}

float somatorio(float s) {
    float numerador = 5, denominador = 7, raiz = 9, base = 5;
    float pi = 3.14;
    
    while (numerador <= 23) {
        s = s + sin((numerador * pi) / denominador) - sqrt(raiz);
        numerador += 2;
        denominador += 2;
        raiz += 9;
    }

    float expoente = -1;
    float res = 0;

    for (int i = 1; i < 10; i++) {
        base = base * expoente;
        expoente--;
    }

    res = base;

    return s + res;
}