#include <stdio.h>

int main() {

    int vetor[4][3] = {{120, 35, 40}, {315, 251, 76}, {276, 110, 93}, {85, 31, 15}};
    int soma = 0, maisVendido = vetor[0][0];
    double mediaLoja1 = 0, mediaLoja2 = 0, mediaLoja3 = 0, somaLoja1 = 0, somaLoja2 = 0, somaLoja3 = 0;
    int cont = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            soma += vetor[i][j];
        }
    }
    printf("A soma de todas as vendas: %d\n\n", soma);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
                if (vetor[i][j] > maisVendido) {
                maisVendido = vetor[i][j];
                if (i == 0) {
                    printf("O produto mais vendido foi: Achocolatado\n\n");
                } else if (i == 1) {
                    printf("O produto mais vendido foi: Arroz\n\n");    
                } else if (i == 2) {
                    printf("O produto mais vendido foi: Leite\n\n");
                } else if (i == 3) {
                    printf("O produto mais vendido foi: Shampoo\n\n");
                }
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (i >= 0 && j == 0) {
                cont++;
                somaLoja1 += vetor[i][j];
            }
        }
    }
    mediaLoja1 = somaLoja1 / cont;
    cont = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (i >= 0 && j == 1) {
                cont++;
                somaLoja2 += vetor[i][j];
            }
        }
    }
    mediaLoja2 = somaLoja2 / cont;
    cont = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (i >= 0 && j == 2) {
                cont++;
                somaLoja3 += vetor[i][j];
            }
        }
    }
    mediaLoja3 = somaLoja3 / cont;
    cont = 0;

    printf("A media da loja 1: %.2lf\n", mediaLoja1);
    printf("A media da loja 2: %.2lf\n", mediaLoja2);
    printf("A media da loja 3: %.2lf\n\n", mediaLoja3);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j >= 0) {
                if (j == 0 && vetor[i][j] > 215) {
                    printf("A loja 1 vendeu mais arroz\n");
                } else if (j == 1 && vetor[i][j] > 215) {
                    printf("A loja 2 vendeu mais arroz\n");
                } else if (j == 2 && vetor[i][j] > 215) {
                    printf("A loja 3 vendeu mais arroz\n");
                }
            }
        }
    }
}