#include <stdio.h>

int pares(int[]);

int main() {

    int array[20];

    for (int i = 0; i < 20; i++) {
        scanf("%d", &array[i]);
    }

    printf("%d", pares(array));
}

int pares(int vetor[]) {
    int cont = 0;

    for (int i = 0; i < 20; i++) {
        if (vetor[i] % 2 == 0) {
            cont++;
        }
    }

    return cont;
}