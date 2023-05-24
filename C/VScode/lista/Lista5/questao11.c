#include <stdio.h>

int main() {

    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrizResultado[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizResultado[i][j] = matriz[i][j] * 3;
            printf("%d ", matrizResultado[i][j]);
        }
        printf("\n");
    }
}