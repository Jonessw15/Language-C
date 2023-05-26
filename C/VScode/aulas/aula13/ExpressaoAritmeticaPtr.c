#include <stdio.h>

// v[0] => *(vPtr + 0) 

void retorna(int []);

int main() {

    /* int num = 2;
    int *nPtr = &num;

    printf("%p\n", nPtr);
    nPtr--;
    printf("%p\n", nPtr); */

    // RELAÇÃO ENTRE VETORES E PONTEIROS

/*     int v[3] = {1, 2, 3};

    printf("%d\n", *(v+0));
    printf("%d\n", *(v+1));
    printf("%d\n", *(v+2));
    printf("%d", *(v+3)); */

    int v[] = {45, 89, 68, 25, 17, 76, 34, 29, 57, 44};

    retorna(v);
    
    return 0;
}

void retorna(int vPtr[]) {
    for (int i = 0; i < 10; i++) {
        printf("%d\n", *(vPtr + i));
    }
    
}