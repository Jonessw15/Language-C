#include <stdio.h>

int main() {

    int num;

    printf("Digite um numero para formar a matriz: ");
    scanf("%d", &num);

    char matriz[num][num];

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            matriz[i][j] = '*';
        }
    }

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;

}