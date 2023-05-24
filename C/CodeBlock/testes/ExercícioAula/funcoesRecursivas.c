#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// QUESTÃO 1
//void modulo(int);
//
//int main() {
//
//    int num;
//    printf("Digite um numero: ");
//    scanf("%d", &num);
//
//    modulo(num);
//    return 0;
//
//}
//
//void modulo(int x) {
//    if (x < 0) {
//        printf("%d", x * (-1));
//    } else {
//        printf("%d", x);
//    }
//}

// QUESTÃO 2
void calculo(char, float, float, float);

int main() {

    char letra;
    float n1, n2, n3;
    printf("Digite uma letra (A ou P): \n");
    scanf("%c", &letra);

    printf("Digite uma nota: \n");
    scanf("%f", &n1);
    printf("Digite uma nota: \n");
    scanf("%f", &n2);
    printf("Digite uma nota: \n");
    scanf("%f", &n3);

    calculo(letra, n1, n2, n3);

}

void calculo(char letter, float x, float y, float z) {
    switch (letter) {
    case 'A':
        printf("A media e: %f", (x + y + z) / 3);
        break;
    case 'P':
        printf("A media ponderada e: %f", (x * 5 + y * 3 + z * 2) / (5 + 3 + 2));
        break;
    default:
        printf("Valores indefinidos");
        break;
    }
}

// QUESTÃO 3

//float somatorio(float);
//
//int main() {
//
//    float num;
//    printf("Digite um numero: \n");
//    scanf("%f", &num);
//
//    printf("%.0f", somatorio(num));
//
//}
//
//float somatorio(float n1) {
//    if (n1 == 1) {
//        return n1 * n1 + 2;
//    } else {
//        return n1 * n1 + 2 + somatorio(n1 - 1);
//    }
//}

// QUESTÃO 4








