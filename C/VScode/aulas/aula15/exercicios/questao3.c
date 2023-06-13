#include <stdio.h>

struct imagem {
    float largura, altura;
    char nome[30];
};

int main() {

    struct imagem pixels;

    printf("Digite o nome da imagem: ");
    fgets(pixels.nome, 30, stdin);
    printf("Digite a largura em pixels: ");
    scanf("%f", &pixels.largura);
    printf("Digite a altura em pixels: ");
    scanf("%f", &pixels.altura);

    printf("\nAs informacoes dadas serao printadas...\n");
    printf("Nome da imagem: %s", pixels.nome);
    printf("A largura da imagem em pixels eh: %.2f\n", pixels.largura);
    printf("A altura da imagem em pixels eh: %.2f\n", pixels.altura);

    return 0;

}