#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//void escreveDobro(int);
//
//int main(){
//
//    int num;
//    printf("Digite um numero: ");
//    scanf("%d", &num);
//
//    escreveDobro(num);
//
//}
//
//void escreveDobro(int x) {
//    printf("O dobro e: %d", x * 2);
//}

//void mostraValor();
//int num = 7;
//int main() {
//
////    float num = sqrt(9);
//    int num = pow(3,4);
//    printf("num e: %d", num);
//
//}
//void mostraValor() {
//    printf("num e %d", num);
//}

/////////////////////////////////////
//int main() {
//
//    float resultado = (pow(5,3) + 8) / sqrt(46);
//    printf("%f \n\n", resultado);
//
//    float resultado = sin(48) / (-5 * pow(sqrt(23), 4));
//    printf("%f", resultado);
//
//    float resultado = log10(pow(4, 7));
//    printf("%f", resultado);
//}

//void verificador(int);
//
//int main() {
//
//    int num;
//    printf("Verificar se eh par ou impar: ");
//    scanf("%d", &num);
//
//    verificador(num);
//
//    return 0;
//}
//
//void verificador(int x) {
//    if (x % 2 == 0) {
//        printf("1");
//    } else {
//        printf("0");
//    }
//}

////////////////////////////////
void verificaDistancia(float, float, float, float);

int main() {

    float x1, x2, y1, y2;
    printf("Digite o valor de x1: \n");
    scanf("%f", &x1);
    printf("Digite o valor de y1: \n");
    scanf("%f", &y1);
    printf("Digite o valor de x2: \n");
    scanf("%f", &x2);
    printf("Digite o valor de y2: \n");
    scanf("%f", &y2);

    verificaDistancia(x1, y1, x2, y2);

}

void verificaDistancia(float px1, float py1, float px2, float py2) {
    float resultado = sqrt(pow(px2 - px1, 2) + pow(py2 - py1, 2));
    printf("A distancia entre os dois pontos e %.2f cm", resultado);
}
