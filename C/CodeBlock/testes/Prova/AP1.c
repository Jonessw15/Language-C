#include <stdio.h>
#include <stdlib.h>


//    QUESTÃO 1
//    int num;
//
//    printf("Digite um numero para o angulo (de 0 a 360 graus): ");
//    scanf("%d", &num);
//
//    if (num > 360 || num < 0) {
//        printf("Angulo invalido");
//    }
//    if (num == 0) {
//        printf("O angulo indicado se encontra no Norte");
//    } else if (num > 0 && num < 90) {
//        printf("O angulo indicado se encontra no Nordeste (NE)");
//    } else if (num == 90) {
//        printf("O angulo indicado se encontra no Leste");
//    } else if (num > 90 && num < 180) {
//        printf("O angulo indicado se encontra no Sudeste (SE)");
//    } else if (num == 180) {
//        printf("O angulo indicado se encontra no Sul");
//    } else if (num > 180 && num < 270) {
//        printf("O angulo indicado se encontra no Sudoeste (SO)");
//    } else if (num == 270) {
//        printf("O angulo indicado se encontra no Oeste");
//    } else if (num > 270 && num < 360) {
//        printf("O angulo indicado se encontra no Noroeste (NO)");
//    }

//    QUESTÃO 2
//    int horas = 0, minutos = 0, segundos, s;
//
//    printf("Digite os segundos: ");
//    scanf("%d", &segundos);
//
//    for (int i = 1; i <= segundos; i++) {
//        if (i > 0) {
//            s++;
//        }
//        if (s == 60) {
//            s = 0;
//            minutos++;
//        }
//        if (minutos == 60) {
//            minutos = 0;
//            horas++;
//        }
//    }
//    printf("%d:%d:%d", horas, minutos, s);

//
//    if (segundos > 60) {
//        s++;
//        minutos++;
//        horas++;
//    }
//    horas = (segundos / 60) / 60;
//    minutos = segundos / 60;
//    if (minutos >= 60) {
//        minutos = 0;
//        horas++;
//    }



//    QUESTÃO 3
//    int base, expoente, resultado = 1;
//
//    printf("Digite a base do seu numero: ");
//    scanf("%d", &base);
//    printf("Digite o expoente do seu numero: ");
//    scanf("%d", &expoente);
//
//    for (int i = 1; i <= expoente; i++) {
//        resultado = resultado * base ;
//    }
//    printf("A resposta do calculo: %d", resultado);

//    QUESTÃO 4
//    int a, b, c;
//    float delta = 1;
//
//    printf("Digite o valor de a: ");
//    scanf("%d", &a);
//
//    while (a == 0) {
//        if (a == 0) {
//            printf("Digite novamente o valor de a: \n");
//            scanf("%d", &a);
//        }
//    }
//
//    printf("Digite o valor de b: ");
//    scanf("%d", &b);
//    printf("Digite o valor de c: ");
//    scanf("%d", &c);
//
//
//        delta = b * b - 4 * a * c;
//
//        if (delta > 0) {
//            printf("A equacao possui duas raizes");
//        } else
//        if (delta == 0) {
//            printf("A equacao possui uma raiz");
//        } else
//        if (delta < 0) {
//            printf("A equacao possui nenhuma solucao");
//        }

    ///////////////////////////////////////
//    int cont = 49, num, maior, menor, media;
//
//    printf("        Pense em um numero! \n");
//    printf("Pensou? \n\n");
//    printf("Caso o numero seja maior, digite: 1 \n");
//    printf("Caso o numero seja menor, digite: 2 \n");
//    printf("Caso o numero seja igual, digite: 3 \n \n");
//
//    maior = cont;
//    menor = cont;
//
//    while (num != 3) {
//        printf("O numero e maior, menor ou igual a %d? \n", cont);
//        scanf("%d", &num);
//
//        if (cont > maior) {
//            maior = cont;
//        }
//        if (cont < menor) {
//            menor = cont;
//        }
//
//        if (num == 1) {
//            cont += 25;
//            media = maior + menor / 2;
//
//        } else if (num == 2) {
//            cont -= 13;
//            media = maior + menor / 2;
//            }
//        if (cont > 99) {
//            cont = 99;
//        }
//        if (cont < 1) {
//            cont = 1+2;
//            }
//        }
//
//     printf("Finalmente \n O numero pensado foi: %d", cont);
#include <stdio.h>
#include <stdlib.h>

int main()
{

int x, op, maior=99, menor=1, Valor, ValorAleatorio;



    printf("°°°°°°Vamos la, pense em um numero°°°°°°\n");


    do{
    ValorAleatorio = menor + (maior-menor)/2;
    printf("Valor sugerido: %d\n\n", ValorAleatorio);

