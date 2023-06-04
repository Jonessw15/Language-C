#include <stdio.h>

int main() {

    float vetor[10] = {1.5, 2, 3.5, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++) {
        printf("%.1f\n", *(vetor + i));
    }

    return 0;

}