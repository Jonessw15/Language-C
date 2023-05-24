#include <stdio.h>
#include <stdlib.h>

int main() {
    int v1[] = {1, 2, 3, 4, 5};
    int v2[5];

    for (int i = 0; i < 5; i++) {
        v2[i] = v1[i] * 2;
        printf("v2[]: %d\n", v2[i]);
    }

}