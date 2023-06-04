#include <stdio.h>

int main() {

    float matriz[6][2];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%p ", &matriz[i][j]);
        }
        printf("\n");
    }

    return 0;

}