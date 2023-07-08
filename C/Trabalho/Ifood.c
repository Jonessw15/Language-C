#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

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

void organizarPerguntas(int);

Ifood cadastrarProdutos() {

    Ifood produtos;

    printf("\n\nDigite o nome do produto: ");
    fgets(produtos.nomeProduto, 50, stdin);

    produtos.nomeProduto[strcspn(produtos.nomeProduto, "\n")] = '\0';

    printf("Digite uma descricao desse produto: ");
    fgets(produtos.descricao, 300, stdin);

    produtos.descricao[strcspn(produtos.descricao, "\n")] = '\0';

    printf("Digite o preco do produto: ");
    scanf("%f", &produtos.preco);

    return produtos;
}

Ifood editarProdutos() {

}

Clientes cadastrarClientes() {

    srand(time(NULL));
    int numAleatorio = rand() % 1000 + 1;

    Clientes customers;

    customers.ID = numAleatorio;

    printf("\n\nDigite o nome do cliente: ");
    fgets(customers.nome, 30, stdin);

    customers.nome[strcspn(customers.nome, "\n")] = '\0';

    printf("Digite o seu endereco: ");
    fgets(customers.endereco, 50, stdin);

    customers.endereco[strcspn(customers.endereco, "\n")] = '\0';

    printf("Digite seu e-mail: ");
    fgets(customers.email, 100, stdin);

    customers.email[strcspn(customers.email, "\n")] = '\0';

    printf("Digite seu telefone: ");
    scanf("%d", &customers.telefone);

    getchar();

    return customers;

}

int main() {

    FILE *arquivo = fopen("cadastro.txt", "a+");
    FILE *cliente = fopen("cadastroCliente.txt", "a+");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        printf("\nCriando arquivo...");
        FILE *arquivo = fopen("cadastro.txt", "w");

        return 1;
    }
    if (cliente == NULL) {
        printf("Erro ao abrir arquivo");
        printf("\nCriando arquivo...");

        FILE *cliente = fopen("cadastroCliente.txt", "w");

        return 2;
    }

    int caso = 0;

    while (caso != 11) {
        Ifood produtos;
        Clientes customers;
        Pedidos pedido;

        /* ÁREA DE PERGUNTAS */

        printf("\nO que voce deseja, meu nobre?\n\n");
        printf("1) Cadastrar produtos\n");
        printf("2) Lista produtos\n");
        printf("3) Cadastrar clientes\n");
        printf("4) Lista de clientes\n");
        printf("5) Realizar um pedido\n");
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
            case 3:
                printf("\nCadastro de clientes");
                break;
            case 4:
                printf("\nLista de clientes");
                break;
            case 5:
                printf("\nRealizar pedido");
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
        } else if (caso == 3) {
            customers = cadastrarClientes();
            fprintf(cliente, "\n\nID do cliente: %d\nNome do cliente: %s\nE-mail do cliente: %s\nEndereco do cliente: %s\nTelefone do cliente: %d",customers.ID, customers.nome, customers.email, customers.endereco, customers.telefone);
        } else if (caso == 4) {

        } else if (caso == 5) {
            cliente = fopen("cadastroCliente.txt", "r");
            char c;
            do {
                c = fgetc(cliente);
                printf("%c", c);
            } while (c != EOF);

            int IDescolhido;
            printf("\n\nPara realizar um pedido escolha um cliente pelo seu ID: ");
            scanf("%d", &IDescolhido);

            printf("O usuario escolhido foi:\n");
            for (int i = 0; i < 1000; i++) {
                if (IDescolhido == customers.ID) {
                    printf("");
                }
            }
        }

    }

    fclose(arquivo);

    printf("\n\nObrigado pela preferencia");

    return 0;

}