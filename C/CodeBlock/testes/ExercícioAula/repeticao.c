#include <stdio.h>
#include <stdlib.h>

int main() {

//     QUESTÃO 1
//    int cont;
//
//    for (cont = 7; cont <= 70; cont += 7) {
//        printf("%d \t", cont);
//    }

    // QUESTÃO 2
//    int idade, reserva, cont = 0;
//
//    do {
//        printf("Digite sua idade \n");
//        scanf("%d", &idade);
//
//        if (idade >= 18) {
//            reserva++;
//        }
//
//        cont++;
//    } while (cont <= 10);
//        printf("As idades maiores que 18 sao: %d", reserva);


    // QUESTÃO 3
//    int numero, cont;
//
//    while (cont != 0) {
//        printf("Digite um numero: \n");
//        scanf("%d", &cont);
//
//        if (cont > 0) {
//            numero += cont;
//        }
//
//    }
//    printf("Os numeros maiores que zeros somados sao: %d", numero);

    // QUESTÃO 4
//    float numerador = 1, denominador = 4;
//    float soma = 0;
//
//    do {
//        soma = soma + (numerador / denominador);
//
//        numerador++;
//        denominador++;
//    } while (numerador <= 20);
//    printf("%f \n", soma);

    // QUESTÃO 5
    int num, conta;
//
    printf("Digite um numero: \n");
    scanf("%d", &num);

    while (conta != 4) {

    printf("Digite um numero para acao: \n");
    scanf("%d", &conta);


    switch (conta) {
        case 1:
            printf("%d x 3: %d \n", num, num * 3);
            break;
        case 2:
            printf("15 porcento de %d e: %d \n", num, num * 0.15);
            break;
        case 3:
            printf("%d ao cubo eh:%d \n", num, num * num * num);
            break;
        case 4:
            printf("Sair da aplicacao");
            break;
        default:
            printf("Acao nao encontrado\n");
            break;
    }
    }
}
