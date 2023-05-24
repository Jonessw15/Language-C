#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
//      QUESTÃO 1


//    int num;
//
//    printf("Digite um número: ");
//    scanf("%d", &num);
//
//    printf("O sucessor de %d é: %d", num, num + 1);
//    printf("O antecessor de %d é: %d", num, num - 1);


//      QUESTÃO 2

//    int n1, n2, n3, n4, media;
//
//    printf("Digite a primeira nota bimestral do aluno \n");
//    scanf("%d", &n1);
//    printf("Digite a segunda nota bimestral do aluno \n");
//    scanf("%d", &n2);
//    printf("Digite a terceira nota bimestral do aluno \n");
//    scanf("%d", &n3);
//    printf("Digite a quarta nota bimestral do aluno \n");
//    scanf("%d", &n4);
//
//    media = (n1 + n2 + n3 + n4) / 4;
//
//    printf("A média da quatros notas é: %d", media);
//


//      QUESTÃO 3

//      int produto = 100, desconto;
//
//      desconto = produto * 0.12;
//      produto = produto - desconto;
//
//      printf("O produto de 100 reais com desconto de 12 porcento é: %d", produto);

//      QUESTÃO 4

//        int num, numInvertido = 0;
//
//        printf("Digite um número de 100 a 999: \n");
//        scanf("%d", &num);
//
//        numInvertido = (numInvertido * 10) + (num % 10);
//        num = num / 10;
//
//        numInvertido = (numInvertido * 10) + (num % 10);
//        num = num / 10;
//
//        numInvertido = (numInvertido * 10) + (num % 10);
//        num = num / 10;
//
//        printf("%d", numInvertido);

//      QUESTÃO 5

//        int raio, volta;
//
//        printf("Forneça a quantidade de voltas que a bicicleta deu em um determinado percurso: \n");
//        scanf("%d", &volta);
//
//        printf("Forneça o raio da bicicleta em centimetros: \n");
//        scanf("%d", &raio);
//
//        printf("A distância percorrida é: %d", volta * raio);

//        QUESTÃO 6

//            int num;
//
//            printf("Digite um número: \n");
//            scanf("%d", &num);
//
//            if (num >= 0) {
//                printf("Positivo");
//            } else {
//                printf("Negativo");
//            }

//         QUESTÃO 7

//            int n1, n2;
//
//            printf("Digite o primeiro número: \n");
//            scanf("%d", &n1);
//            printf("Digite o segundo número: \n");
//            scanf("%d", &n2);
//
//            if (n1 == n2) {
//                printf("Números iguais");
//            } else if (n1 > n2) {
//                printf("O número maior é: %d", n1);
//            } else {
//                printf("O número maior é: %d", n2);
//            }

//         QUESTÃO 8

//            int n1, n2, n3, media;
//
//            printf("Digite a primeira nota bimestral do aluno \n");
//            scanf("%d", &n1);
//            printf("Digite a segunda nota bimestral do aluno \n");
//            scanf("%d", &n2);
//            printf("Digite a terceira nota bimestral do aluno \n");
//            scanf("%d", &n3);
//
//            media = (n1 + n2 + n3) / 3;
//
//            printf("A média do aluno é: %d \n", media);
//
//            if (media >= 7) {
//                printf("Aprovado");
//            } else if (media >= 4 || media < 7) {
//                printf("Fará a prova final");
//            } else {
//                printf("Reprovado");
//            }


    return 0;
}
