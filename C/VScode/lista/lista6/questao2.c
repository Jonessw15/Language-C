#include <stdio.h>

int main() {

    int numInteiro = 10;
    float numReal = 5.5;
    char letra = 'A';

    int *numInteiroPtr = &numInteiro;
    float *numRealPtr = &numReal;
    char *letraPtr = &letra;

    printf("Antes: \n");
    printf("%d\n", *numInteiroPtr);
    printf("%.1f\n", *numRealPtr);
    printf("%c\n", *letraPtr);

    *numInteiroPtr = 20;
    *numRealPtr = 11.2;
    *letraPtr = 'B';

    printf("\nDepois: \n");
    printf("%d\n", *numInteiroPtr);
    printf("%.1f\n", *numRealPtr);
    printf("%c\n", *letraPtr);

    return 0;

}