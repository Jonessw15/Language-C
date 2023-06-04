#include <stdio.h>

void retornaMaior(int [], int *, int *);

int main() {

    int maior, vezes = 0;
    int vetor[4] = {1, 2, 5, 5};

    retornaMaior(vetor, &maior, &vezes);

    printf("O maior elemento eh: %d e apareceu %d vezes", maior, vezes);

    return 0;

}

void retornaMaior(int vetor[], int *maior, int *vezes) {
    *maior = *(vetor + 0);
    for (int i = 0; i < 4; i++) {
        if (*maior < *(vetor + i)) {
            *maior = *(vetor + i);
            *vezes += 1;
        }
    }
}
