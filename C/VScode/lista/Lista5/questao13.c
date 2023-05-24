#include <stdio.h>

int main() {

    int matriz[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite um numero para preencher a matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            
            if (matriz[i][j] % 2 == 1) {
                matriz[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}