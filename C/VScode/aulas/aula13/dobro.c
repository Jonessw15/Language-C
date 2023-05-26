#include <stdio.h>

int dobro(int *);

int main() {

    int num;

    printf("Digite um numero para retornar o dobro do seu valor: ");
    scanf("%d", &num);

    dobro(&num);

    printf("O dobro do valor eh: %d", num);

    return 0;

}

int dobro(int *numPtr) {
    *numPtr = *numPtr * 2;
    return 0;
}