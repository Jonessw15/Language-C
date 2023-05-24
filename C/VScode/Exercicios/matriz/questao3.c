#include <stdio.h>

int main() {
    int matriz[4][2];
    int zero = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Digite um numero para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            if (matriz[i][j] == 0) {
                zero++;
            }
        }
    }

    printf("A matriz possui %d numeros zeros", zero);

}