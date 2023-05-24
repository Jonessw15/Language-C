#include <stdio.h>
#include <stdlib.h>

int main() {

    int cont, num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    for (cont = 1; cont <= 10; cont++) {
        printf("%d x %d = %d \n \n", num, cont, num * cont);
    }

}
