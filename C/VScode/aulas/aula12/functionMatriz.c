#include <stdio.h>

int somaMatriz(int[][2]);

int main() {

    int matriz[2][2] = {{1, 2}, {5, 6}};
    printf("%d", somaMatriz(matriz));

}

int somaMatriz(int m[][2]) {
    int soma = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            soma += m[i][j];
        }
    }
    return soma;
}