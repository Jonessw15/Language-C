#include <stdio.h>
#include <stdlib.h>

void* malloc(size_t size);

int main() {

    int *vetorPtr;
    int tamanho;

    printf("Digite o tamanho do vetor");
    scanf("%d", &tamanho);

    vetorPtr = (int*)malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetorPtr[i]);
    }

    for (int i = 0; i < tamanho; i++) {
        printf("%d", vetorPtr[i]);
    }

    free(vetorPtr);

    return 0;

}