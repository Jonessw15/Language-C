#include <stdio.h>

int main() {
    int n[5] = {5, 1, 4, 2, 8};
/*     int i, j, aux;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (n[j] > n[j + 1]) {
                aux = n[j];
                n[j] = n[j + 1];
                n[j + 1] = aux;
            }
        }
    }

    printf("%d", n[0]); */
    int valorChave = 2, i;
    for (i = 0; i < 5; i++) {
        if (valorChave == n[i]) {
            printf("O valor procurado esta no valor");
        }
    }
}