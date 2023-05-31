#include <stdio.h>

void dobro(int [], int);

int main() {

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    int vetor[num];

    dobro(vetor, num);

    return 0;

}

void dobro(int vPtr[], int n) {
    int cont = 0;
    for (int i = 0; i < n; i++) {
        *(vPtr + i) = cont;
        cont += 2;
        printf("%d\n", *(vPtr + i));
    }   

}