#include <stdio.h>

int main() {

    int matriz[3][5];
    int soma = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
        printf("Digite o elemento v[%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);
        soma += matriz[i][j];
        }
    }

    printf("\n O valor da matriz: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
        printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Soma: %d", soma);
    return 0;
    
}