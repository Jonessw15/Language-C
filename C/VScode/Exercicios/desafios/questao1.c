#include <stdio.h>

int main() {

    int matriz[3][4], somaColuna1 = 0, somaColuna2 = 0, somaColuna3 = 0, somaColuna4 = 0;
    int soma[4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (j == 0) {
                somaColuna1 += matriz[i][j];
            } else if (j == 1) {
                somaColuna2 += matriz[i][j];
            } else if (j == 2) {
                somaColuna3 += matriz[i][j];
            } else if (j == 3) {
                somaColuna4 += matriz[i][j];
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int j = 0; j < 4; j++) {
        soma[j] = 0;
        for (int i = 0; i < 3; i++) {
            soma[j] += matriz[i][j];
        }
    }

    printf("\n%d\n", soma[0]);
    printf("%d\n", soma[1]);
    printf("%d\n", soma[2]);
    printf("%d\n", soma[3]);

    printf("Resultado da soma da coluna 1: %d\n", somaColuna1);
    printf("Resultado da soma da coluna 2: %d\n", somaColuna2);
    printf("Resultado da soma da coluna 3: %d\n", somaColuna3);
    printf("Resultado da soma da coluna 4: %d\n", somaColuna4);

    return 0;

}