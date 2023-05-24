#include <stdio.h>
#include <stdlib.h>

int main() {

    int cont, num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    for (cont = 1; cont <= num; cont++) {
        printf("%d \n", cont);
    }

}
