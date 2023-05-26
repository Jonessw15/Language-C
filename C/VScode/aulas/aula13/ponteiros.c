#include <stdio.h>
#include <conio.h>
#include <math.h>

/* void cuboPorReferencia(int *);
 */
int main() {

    /* textcolor(RED); */

    int x = 10;
    int *xPtr = &x;
    /* cprintf("Alô, Mundo!"); */

    printf("O valor de x: %d\n", x);
    printf("O endereco de x: %p\n", &x);
    printf("O valor apontado para xPtr: %d\n", *xPtr);
    printf("O valor de xPtr: %p\n", xPtr);
    printf("O endereco de xPtr: %p", &xPtr);
 

    /* int num = 4;

    cuboPorReferencia(&num);
    printf("%d", num); */


    return 0;

}

/* void cuboPorReferencia(int *nPtr) {
    *nPtr = pow(*nPtr, 3);
} */