#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int num;

    printf("Digite um n�mero para mostrar a classifica��o do alimento; (De 1 at� 4). \n");
    scanf("%d", &num);

    if (num == 1) {
        printf("Alimento n�o-perec�vel");
    } else if (num == 2) {
        printf("Alimento perec�vel");
    } else if (num == 3) {
        printf("Vestu�rio");
    } else if (num == 4) {
        printf("Limpeza");
    }
}
