#include <stdio.h>

float media(int, float *);

int main() {

    int t;

    printf("Digite um tamanho para o vetor: ");
    scanf("%d", &t);

    float v[t];

    for (int i = 0; i < t; i++) {
        printf("Digite um valor para o vetor[%d]", i);
        scanf("%f", &v[i]);
    }

    printf("%.1f", media(t, v));

    return 0;

}

float media(int tamanho, float *vNotas) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += *(vNotas + i);
    }

    float media = soma / tamanho;

    return media;
}