#include <stdio.h>

int main() {

    int vetor[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero para o vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\n Valores diviseis por cinco: ");
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 5 == 0) 
        printf("\n%d", vetor[i]);
    }

}