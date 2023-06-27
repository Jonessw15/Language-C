#include <stdio.h>
#include <stdlib.h>

void* malloc(size_t size);

int main() {

//  EXEMPLO 1
    /* char *ptr;

    ptr = (char*)malloc(1);

    scanf("%c", &ptr);
    printf("%c", *ptr); */

//  EXEMPLO 2

    /* int *numero;
    int n;

    numero = (int*)malloc(n * sizeof(int));

    if (numero == NULL) {
        printf("Memoria esta cheia!");
    }

    scanf("%d", &numero);
    printf("%d", *numero);

    free(numero); // Para deixar a memória livre. */

//  EXEMPLO 3
    int *vetorPtr;
    int n = 7;

    vetorPtr = (int*)calloc(n, sizeof(int));
    printf("Alocacao inicial de %d elementos\n", n);

    vetorPtr = (int*)realloc(vetorPtr, 14 * sizeof(int));
    printf("Realocao de %d elementos\n", n * 2);

    free(vetorPtr);

    return 0;
}