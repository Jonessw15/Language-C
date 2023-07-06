#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {

    int tamanho, cont = 1, percorrer;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++) {
        printf("Digite um numero para a posicao do vetor[%d]: ", i);
        scanf("%d", &*(vetor + i));
    }

    while (cont == 1) {
        printf("Quantas posicoes voce deseja percorrer? Sendo que o maximo de posicoes eh %d? ", tamanho);
        scanf("%d", &percorrer);

        if (percorrer > tamanho || percorrer <= 0) {
            printf("Tamanho invalido\n");
        } else {
            printf("As posicoes do elemento ate chegar no ultimo eh: ");
            for (int i = 0; i < percorrer; i++) {
                printf("%d\t", *(vetor + i));
            }
            percorrer -= 1;
            printf("\n\n O ultimo elemento eh: %d.\nE seu endereco eh: %p", *(vetor + percorrer), &*(vetor + percorrer));
        }

        printf("\nVoce deseja repetir o processo? (Digite '1' para sim e '2' para nao)\n");
        scanf("%d", &cont);
    }

    printf("\n\n Tchau ;)");

    return 0;

}