#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, soma;

    for (i = 3; i < 500; i += 3) {
        if (i % 2 == 0) {
            continue;
        }

        printf("%d \n", i);
        soma += i;
    }
    printf("A soma de todos os numeros e: %d", soma);
}
