#include <stdio.h>

int main() {

    int matriz1[2][3], matriz2[3][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite um numero para a posicao da matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
            
            matriz2[j][i] = matriz1[i][j];
        }
    }

    printf("\nA matriz transposta: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }


}