#include <stdio.h>

int main() {

    int array[] = {54, 42, 33, 18, 75, 72};

    for (int i = 0; i < 6; i++) {
        if (i % 2 == 1) {
            printf("Elemento do incide impar: %d\n", array[i]);
        }
    }
    for (int i = 0; i < 6; i++) {
        if (array[i] % 2 == 1) {
            printf("\nElemento impares: %d", array[i]);
        }
    }

}