#include <stdio.h>

int main() {
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int cont = 0;

    printf("O vetor: \n");

    for (int i = 0; i < 10; i++) {
        printf("%d\n", vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 1) {
            cont++;
            printf("Este numero e impar: %d\n", vetor[i]);
        }
    }
    printf("Existem %d elementos ímpares", cont);
}