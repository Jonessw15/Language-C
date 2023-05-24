#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potencia(int, int);

int main() {

    int base, expoente;
    printf("Digite o valor da sua base: \n");
    scanf("%d", &base);
    printf("Digite o valor do seu expoente: \n");
    scanf("%d", &expoente);

    printf("%d", potencia(base, expoente));
//    int resultado = 1, num = 5;
//    for (int cont = num; cont >= 1; cont--) {
//        resultado = resultado * cont;
//    }
//        printf("%d \t", resultado);
}

int potencia(int num, int num2) {

    if(num2 == 0) {
        return 1;
    } else {
        return num * potencia(num, num2 - 1);
    }
}
