#include <stdio.h>

int main() {

    int tamanho;

    printf("Digite quantas letras voce quer ver de uma palavra: ");
    scanf("%d", &tamanho);

    char palavra[tamanho];

    printf("Digite a palavra: ");
    scanf("%s", palavra);

    for (int i = 0; i < tamanho; i++) {
        printf("%c\n", palavra[i]);
    }

    return 0;

}