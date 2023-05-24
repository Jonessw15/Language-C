#include <stdio.h>

void indicePar(int[]);
void Par(int[]);

int main() {
    int v[] = {71, 62, 16, 11, 25, 31};
    indicePar(v);
    Par(v);

}

void indicePar(int vetor[]) {
    for (int i = 0; i < 6; i += 2) {
            printf("O indice par do garoto e: %d\n", vetor[i]);
    }
}

void Par(int vetor[]) {
    for (int i = 0; i < 6; i++) {
        if (vetor[i] % 2 == 0) {
            printf("\nA posicao do garoto com valor par e: %d\n", vetor[i]);
        }
    }
}
