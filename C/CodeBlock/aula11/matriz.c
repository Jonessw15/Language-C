#include <stdio.h>

int impares(int[9][2]);

int main() {

    int matriz[9][2];

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("%d", impares(matriz));

    return 0;

}

int impares(int m[9][2]) {
    int impares;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 2; j++) {
            if (m[i][j] % 2 == 1) {
                impares = m[i][j];
            }
        }
        printf("\n");
    }

    return impares;

}
