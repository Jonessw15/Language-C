#include <stdio.h>
#include <stdlib.h>

int main() {

    int id, idMaior, idMenor;
    float peso, pesoMaior, pesoMenor;

    printf("Digite o id do boi: ");
    scanf("%d", &id);
    printf("Digite o peso do boi: ");
    scanf("%f", &peso);

    idMaior = id;
    idMenor = id;
    pesoMaior = peso;
    pesoMenor = peso;

    for (int i = 2; i <= 90; i++) {
    printf("Digite o id do boi: ");
    scanf("%d", &id);
    printf("Digite o peso do boi: ");
    scanf("%f", &peso);

    if (peso > pesoMaior) {
        pesoMaior = peso;
        idMaior = id;
    }
    if (peso < pesoMenor) {
        pesoMenor = peso;
        idMenor = id;
    }
    }
    printf("O id do boi mais gordo e: %d %.2fkg \n", idMaior, pesoMaior);
    printf("O id do boi mais magro e: %d %.2fkg \n", idMenor, pesoMenor);

}
