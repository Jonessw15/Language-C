#include <stdio.h>

int main() {

    int *numPtr;
    int emanuel=7;

    numPtr= &emanuel;
    printf("%d\n", *numPtr);

    printf("%p\n", &numPtr);

    printf("%p\n", &emanuel);

    printf("%p", numPtr);

}