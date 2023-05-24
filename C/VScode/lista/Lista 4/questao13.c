#include <stdio.h>

int inverteNumero(int num, int fator) {
if (fator == 1) {
        return num;
    } else {
        int digito = num / fator;
        return fator * inverteNumero(num % fator, fator / 10);
    }
}

int main() {
    int num, numInvertido;
    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &num);
    numInvertido = inverteNumero(num, 100);
    printf("Numero invertido: %d\n", numInvertido);
    return 0;
}

