#include <stdio.h>

int main() {

    int v1[8], v2[8];

    for (int i = 0; i < 8; i++) {
        scanf("%d", &v1[i]);
        v2[i] = v1[i] * 3;
        printf("O triplo: %d\n", v2[i]);
    }

    return 0;

}