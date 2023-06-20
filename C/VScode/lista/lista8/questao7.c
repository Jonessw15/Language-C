#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char nomeMusico[50], instrumento[30];
    int idade;
} Musico;

typedef struct {
    char nomeBanda[50], genero[30];
    int numMusicos;
    Musico individuo[5];
} Banda;

void exibirBanda(Banda );

Musico lerMusico() {
    Musico artistas;

    printf("Digite o nome do musico: ");
    fgets(artistas.nomeMusico, 50, stdin);

    artistas.nomeMusico[strcspn(artistas.nomeMusico, "\n")] = '\0';

    printf("Digite o instrumento que esse musico toca: ");
    fgets(artistas.instrumento, 30, stdin);

    artistas.instrumento[strcspn(artistas.instrumento, "\n")] = '\0';

    printf("Digite a idade do musico: ");
    scanf("%d", &artistas.idade);

    getchar();

    return artistas;
}

Banda lerBanda() {
    Banda toca;

    printf("Digite o nome da banda: ");
    fgets(toca.nomeBanda, 50, stdin);

    toca.nomeBanda[strcspn(toca.nomeBanda, "\n")] = '\0';

    printf("Digite o genero da banda: ");
    fgets(toca.genero, 30, stdin);

    toca.genero[strcspn(toca.genero, "\n")] = '\0';

    printf("Digite a quantidade musicos que a banda tem: ");
    scanf("%d", &toca.numMusicos);

    getchar();

    for (int i = 0; i < toca.numMusicos; i++) {
        toca.individuo[i] = lerMusico();
    }

    return toca;
}

int main() {

    Banda OneRepublic;

    printf("Cadastro de banda\n");
    OneRepublic = lerBanda();

    printf("\nExibir banda\n");
    exibirBanda(OneRepublic);

}



void exibirBanda(Banda tocadores) {
    printf("O nome da banda eh: %s\n", tocadores.nomeBanda);
    printf("O genero da banda eh: %s\n", tocadores.genero);
    printf("O numero de musicos na banda eh: %d\n", tocadores.numMusicos);
    printf("MUSICOS\n\n");
    
    for (int i = 0; i < tocadores.numMusicos; i++) {
        printf("O nome do musico %d eh: %s\n", i + 1, tocadores.individuo[i].nomeMusico);
        printf("O nome do instrumento eh: %s\n", tocadores.individuo[i].instrumento);
        printf("A idade do musico eh: %d\n", tocadores.individuo[i].idade);
    }
}