#include <stdio.h>

int main() {

    int n1, n2;
    int *n1Ptr, *n2Ptr;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite um numero: ");
    scanf("%d", &n2);

    n1Ptr = &n1;
    n2Ptr = &n2;


    if (*n1Ptr > *n2Ptr) {
        printf("%p eh maior que %p", &n1Ptr, &n2Ptr);
    } else {
        printf("%p eh maior que %p", &n2Ptr, &n1Ptr);
    }

    return 0;

}