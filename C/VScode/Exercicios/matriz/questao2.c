#include <stdio.h>

int main() {
    int m[3][4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", m[i][j] = i + j);
        }
        printf("\n");
    }
}