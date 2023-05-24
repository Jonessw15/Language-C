#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float potencia(float, float);

int main() {

    float base, expoente;
    printf("Digite um numero para a base: ");
    scanf("%f", &base);
    printf("Digite um numero para a expoente: ");
    scanf("%f", &expoente);

    printf("%f", potencia(base, expoente));

}

float potencia(float x, float n) {
    if (n == 0) {
        return 1;
    } else {
        return x * potencia(x, n-1);
    }
}
