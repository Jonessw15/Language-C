#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char sexo;
    int numSon, idade;
    float salario;
} Povoado;

void coletaDados(Povoado *);
void media(Povoado []);

int main() {

    Povoado povo[2];

    for (int i = 0; i < 2; i++) {
        printf("Coleta de dados: \n");
        coletaDados(&povo[i]);
    }

        media(povo);

}

void coletaDados(Povoado *povoPtr) {
    printf("Qual o genero da pessoa? (F ou M) ");
    scanf("%c", &povoPtr -> sexo);

    if (povoPtr -> sexo == 'F') {
        printf("Qual a idade da mulher? ");
        scanf("%d", &povoPtr -> idade);
    } else if (povoPtr -> sexo == 'M') {
        printf("Qual a idade do homem? ");
        scanf("%d", &povoPtr -> idade);
    }

    printf("Quantos filhos esta pessoa tem? ");
    scanf("%d", &povoPtr -> idade);
    printf("Qual o salario desse individuo? ");
    scanf("%f", &povoPtr -> salario);

    getchar();
}

void media(Povoado media[]) {
    float soma = 0, MEDIA;

    for (int i = 0; i < 2; i++) {
        soma += media[i].salario;
    }

    MEDIA = soma / 2;

    printf("\nA media eh: %.2f\n", MEDIA);

}