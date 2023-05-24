#include <stdio.h>

int main() {

    int num, cont = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    int matriz1[num][num];
    int matriz2[num][num];

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            printf("Digite um numero para a posicao da matriz[%d][%d]", i, j);
            scanf("%d", &matriz1[i][j]);

            matriz2[j][i] = matriz1[i][j];
        }
    }

    printf("\nMatriz\n");

      for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\n Matriz transposta\n");
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            if (matriz1[i][j] == matriz2[i][j]) {
                cont++;
            }
        }
    }

    if (cont == num * 2) {
        printf("\nEh uma matriz simetrica");
    } else {
        printf("Nao eh simetrica");
    }


    return 0;

}