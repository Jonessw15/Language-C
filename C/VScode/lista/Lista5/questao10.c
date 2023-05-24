#include <stdio.h>

void menor(int[]);

int main() {

    int array[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    menor(array);

    return 0;

}

void menor(int vetor[]) {
    int posicao = 0, Menor;

    Menor = vetor[0];
    for (int i = 0; i < 10; i++) {
        if (vetor[i] < Menor) {
            Menor = vetor[i];
            posicao = i;
        }
    }

    printf("O menor numero do vetor e: %d\n", Menor);
    printf("A posicao desse numero no vetor e: %d\n", posicao);


}