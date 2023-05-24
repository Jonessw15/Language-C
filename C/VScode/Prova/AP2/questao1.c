#include <stdio.h>

int main() {

    int vetor[12], num, cont = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 0; i < 12; i++) {
        printf("Digite um valor para posicao do vetor[%d]", i);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 12; i++) {
        printf("%d\n", vetor[i]);
    }

    for (int i = 0; i < 12; i++) {
        if (vetor[i] == num) {
            printf("%d encontrado na posicao do vetor: %d\n", vetor[i], i);
        } else {
            cont++;
        }
    }

    if (cont > 0) {
        printf("Nao contem o numero desejado");
    }




    return 0;

}