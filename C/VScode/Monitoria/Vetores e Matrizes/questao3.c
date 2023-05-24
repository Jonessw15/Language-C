#include <stdio.h>

int main() {
    int v1[] = {1, 2, 3, 4, 5}, v2[] = {6, 7, 8, 9, 10};
    int v3[10];

    printf("Os valores do array v1[]: ");
    for (int i = 0; i < 5; i++) {
        printf("%d  ", v1[i]);
    }
    printf("\nOs valores do array v2[]: ");
    for (int i = 0; i < 5; i++) {
        printf("%d  ", v2[i]);
    }


    for (int i = 0; i < 5; i++) {
        v3[i] = v1[i];
        for (int i = 0; i < 5; i++) {
            v3[i + 5] = v2[i];
        } 
    }
    printf("\n\nA uniao de array de v1 e v2 e: \n");
    for (int i = 0; i < 10; i++) {
        printf("\n%d", v3[i]);
    }

}