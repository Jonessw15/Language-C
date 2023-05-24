#include <stdio.h>

int main() {
    double vetor[10], soma = 0;
    double media = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / 10;
    printf("media: %lf", media);
}