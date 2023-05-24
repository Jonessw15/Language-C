#include <stdio.h>
#include <stdlib.h>

void delta(int, int, int);

int main() {
    int a, b, c;
    printf("Digite o valor de 'a', 'b' e 'c': ");
    scanf("%d %d %d", &a, &b, &c);

    delta(a, b, c);
}

void delta(int A, int B, int C) {
    float resultado = B * B - 4 * A * C;
    printf("%f", resultado);
}