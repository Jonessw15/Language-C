// classe para jogador
// atributos: nome, posição, dataNascimento, nacionalidade, altura e peso
// crie um metodo para calcular a idade do jogador e calcular quanto tempo ele falta para se aposentar
// um jogador se aposenta com 35 anos

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char nome[61], posicao[61];
    int idade, nacionalidade;
    float altura, peso;

    printf("Digite o nome do jogador: \n");
    scanf("%s", &nome);

    printf("Digite a posição do jogador: \n");
    scanf("%s", &posicao);

    printf("Digite a idade do jogador: \n");
    scanf("%d", &idade);

    printf("Digite a nacionalidade do jogador: \n");
    scanf("%d", &nacionalidade);

    printf("Digite a altura do jogador");
    scanf("%f", &altura);

    printf("Digite o peso do jogador");
    scanf("%f", &peso);


}
