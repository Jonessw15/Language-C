#include <stdio.h>
#include <string.h>

typedef struct {
    int dia, mes, ano;
} Data;

typedef struct {
    char nome[100];
    Data dataCriada;
    float preco;    
} Produto;

void efetua(Produto *);
void imprime(Produto );

int main() {

    Produto product;

    printf("Produto\n");
    efetua(&product);

    printf("Imprimir\n");
    imprime(product);

    return 0;

}

void efetua(Produto *proPtr) {
    printf("Digite o nome do produto: ");
    fgets(proPtr -> nome, 100, stdin);

    proPtr -> nome[strcspn(proPtr -> nome, "\n")] = '\0';

    printf("Digite a data o dia, mes e ano, na qual foi comprado o produto");
    scanf("%d %d %d", &proPtr -> dataCriada.dia, &proPtr -> dataCriada.mes, &proPtr -> dataCriada.ano);
    printf("Digite quanto foi o produto em reais: ");
    scanf("%f", &proPtr -> preco);

    getchar();
}

void imprime(Produto product) {
    printf("O nome do produto eh: %s\n", product.nome);
    printf("A data do produto eh: %d/%d/%d\n", product.dataCriada.dia, product.dataCriada.mes, product.dataCriada.ano);
    printf("O valor do produto eh: %.2f\n", product.preco);
}