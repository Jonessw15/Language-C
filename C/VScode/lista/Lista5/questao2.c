#include <stdio.h>

int main() {

    int vetor[97], quinhentos = 501;

    for (int i = 0; i < 97; i++) {
        vetor[i] = quinhentos++;
    }

    for (int i = 0; i < 97; i++) {
            printf("%d\n", vetor[i]);
        if (vetor[i] % 2 == 1) {
            printf("Impar: %d\n", vetor[i]);
        }
    }

}