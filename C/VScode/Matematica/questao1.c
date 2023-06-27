#include <stdio.h>

void uniao(int [], int [], int, int);

int main() {

    int vetor1[] = {1, 2, 3, 4};
    int vetor2[] = {3, 4, 5, 6};

    uniao(vetor1, vetor2, 4, 4);

}

void uniao(int a[], int b[], int tamanhoA, int tamanhoB) {
    int uniao[tamanhoA + tamanhoB], i, tamanhoC = 0;
    
    for (i = 0; i < tamanhoA; i++) {
        uniao[i] = a[i];
    }

    for (int j = 0; j < tamanhoB; j++) {
        int elemento = b[j];
        int encontrado = 0;

        for (int k = 0; k < tamanhoA; k++) {
            if (elemento == a[k]) {
                encontrado = 1;
                break;
            }
        }

        if (!encontrado) {
            uniao[i] = elemento;
            i++;
        }
    }

    for (int t = 0; t < 8; t++) {
        if (uniao[i] > 10) {
            tamanhoC++;
        }
    }

    int uniaouniao[(tamanhoA + tamanhoB) - tamanhoC];

    printf("Uniao: ");
    for (i = 0; i < tamanhoA + tamanhoB; i++) {
        uniaouniao[i] = uniao[i];
        printf("%d ", uniaouniao[i]);

        if (i == 5) {
            break;
        } 
    }
    printf("\n");
}