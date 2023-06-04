#include <stdio.h>

void chamaVetor(int [], int);

int main() {

    int vetor[2], valor = 2;

    chamaVetor(vetor, valor);

    return 0;

}

void chamaVetor(int v[], int valorVetor) {
    for (int i = 0; i < 2; i++) {
        printf("%i\n", *(v + i) = valorVetor);
    }
}