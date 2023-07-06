#include <stdio.h>
#include <windows.h>

void perguntas(int);

typedef struct {
    char nomeProduto[50];
    char descricao[300];
    int ID;
    float preco;
} Ifood;

typedef struct {
    char nome[30];
    char endereco[50];
    char email[100];
    int ID;
    int telefone;
} Clientes;

typedef struct {
    char status[50];
    int ID;
    Clientes idCliente;
    int dia, mes, ano;
    float pedidoValor;
} Pedidos;

/* FUNÇÕES */

Ifood cadastrarProdutos() {

    static int idProduto = 1;
    Ifood produtos;

    printf("\n\nDigite o nome do produto: ");
    fgets(produtos.nomeProduto, 50, stdin);

    produtos.nomeProduto[strcspn(produtos.nomeProduto, "\n")] = '\0';

    printf("Digite uma descricao desse produto: ");
    fgets(produtos.descricao, 300, stdin);

    produtos.descricao[strcspn(produtos.descricao, "\n")] = '\0';

    produtos.ID = idProduto++;

    printf("Digite o preco do produto: ");
    scanf("%f", &produtos.preco);

    return produtos;
}

Ifood editarProdutos() {

}

int main() {

    FILE *arquivo = fopen("cadastro.txt", "a+");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    int caso = 0;

    while (caso != 11) {
        Ifood produtos;
        Clientes cliente;
        Pedidos pedido;

        /* ÁREA DE PERGUNTAS */

        printf("\nO que voce deseja, meu nobre?\n\n");
        printf("1) Cadastrar produtos\n");
        printf("2) Lista produtos\n");
        printf("11) Sair do programa >_<");

        printf("\nEscolha: ");
        scanf("%d", &caso);

        system("cls");
        getchar();

        /* system("color 3f");
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5); */

        switch (caso) {
            case 1:
                printf("\nCadastro de produtos");
                break;
            case 2:
                printf("\nLista de produtos");
                break;
            case 11:
                printf("Tchau\n");
                break;
            default:
                printf("Nada escolhido\n");
                break;
        }

        if (caso == 1) {
            produtos = cadastrarProdutos();
            fprintf(arquivo, "\n\nID do produto: %d\nNome do produto: %s\nDescricao do produto: %s\nPreco do produto: %.2f",produtos.ID, produtos.nomeProduto, produtos.descricao, produtos.preco);
        } else if (caso == 2) {
            arquivo = fopen("cadastro.txt", "r");
            char c;
            do {
                c = fgetc(arquivo);
                printf("%c", c);
            } while (c != EOF);
        }

    }

    fclose(arquivo);

    printf("\n\nObrigado pela preferencia");

    return 0;

}
