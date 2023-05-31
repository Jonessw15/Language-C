#include <stdio.h>

void calculo(int *);

int main() {

    int raio;

    printf("Digite o raio: ");
    scanf("%d", &raio);

    calculo(&raio);

    return 0;

}

void calculo(int *rPtr) {
    double C;
    C = 3.14 * *rPtr;
    printf("%lf", C); 
}