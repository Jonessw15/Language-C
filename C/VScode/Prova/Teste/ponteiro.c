#include <stdio.h>

int main() {

    int vetor[] = {1, 2, 3, 4, 5};
    int *vetorPtr = &vetor;

    vetorPtr += 4;

    printf("%d", vetorPtr);

}