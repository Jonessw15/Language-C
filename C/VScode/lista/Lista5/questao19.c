#include <stdio.h>

int impares(int[9][2]);

int main() {

    int matriz[9][2];

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("A no vetor %d numeros impares", impares(matriz));

    return 0;

}

int impares(int m[9][2]) {
    int cont = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 2; j++) {
            if (m[i][j] % 2 == 1) {
                cont++;
            }
        }
        printf("\n");
    }

    return cont;

}