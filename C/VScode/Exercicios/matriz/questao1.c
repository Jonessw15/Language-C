#include <stdio.h>

int main() {
    int mA[2][2] = {{1, 2}, {3, 4}}, mB[2][2] = {{5, 6}, {7, 8}};
    int mC[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            mC[i][j] = mA[i][j] + mB[i][j];
            printf("%d ", mC[i][j]);
        }
        printf("\n");
    }
}