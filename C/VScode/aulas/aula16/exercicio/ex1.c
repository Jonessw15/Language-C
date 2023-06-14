#include <stdio.h>

struct data {
    int dia, mes, ano;
};

int main() {

    struct data dt;
    struct data *dtPtr = &dt;

    printf("Digite um dia: ");
    scanf("%d", &dtPtr -> dia);
    printf("Digite um mes: ");
    scanf("%d", &dtPtr -> mes);
    printf("Digite um dia: ");
    scanf("%d", &dtPtr -> ano);

    printf("%d/%d/%d", dtPtr -> dia, dtPtr -> mes, dtPtr -> ano);

    return 0;

}