#include <stdio.h>

int main() {

    int vetor[10], maior = 0, soma = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] > 30) {
            maior++;
            soma += vetor[i];
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("vetor[%d]: %d\n", i, vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] > 30) {
            printf("\n'%d' maior que 30\n", vetor[i]);
        }
    }

    printf("\n A soma dos numeros maiores que 30: %d", soma);




    return 0;

}