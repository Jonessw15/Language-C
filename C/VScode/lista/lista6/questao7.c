#include <stdio.h>

void matrizTransposta(int *, int);

int main() {

    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int tamanho = 3;

    printf("Matriz: \n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    matrizTransposta(&matriz[0][0], tamanho);

    printf("\nMatriz transposta: \n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;

}

void matrizTransposta(int *matriz, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            int *a = matriz + i * tamanho + j;
            int *b = matriz + j * tamanho + i;
            int temporaria = *a;
            *a = *b;
            *b = temporaria;
        }
    }
}