#include <stdio.h>

void imprimirImagem(int);

int main() {

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    imprimirImagem(num);

}

void imprimirImagem(int n1) {

    for (int i = 1; i <= n1; i++) {
        for (int j = 1; j <= i; j++) {

            printf("* ");

        }
        printf("\n");

    }

}