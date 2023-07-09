/* srand(time(NULL));
        int numeroAleatorio = rand() % 1000 + 1; */
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
    char telefone[30];
    int ID;
} Clientes;

typedef struct {
    char status[50];
    int ID;
    Clientes idCliente;
    int dia, mes, ano;
    float pedidoValor;
} Pedidos;

void perguntas();
void selecionarFuncao(int);
void listaClientes();
int cadastrarClientes();

/* VARIAVEIS GLOBAIS */
int tamanho = 1000;
Clientes list[1000];
int quantidade = 0;
int caso = 0;

int main() {

    /* CRIAÇÃO DE ARQUIVOS PARA O PROGRAMA */
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

    /* INÍCIO DO PROJETO NA FUNÇÃO PRINCIPAL */
    perguntas();
    printf("Obrigado pela visita");

    fclose(arquivo);
    fclose(cliente);

}

void perguntas() {
    while (caso != 11) {

    }
}

void selecionarFuncao(int opcao) {
    if (opcao == 3) {
        printf("\nCadastro de clientes\n\n");
        cadastrarClientes();
    } else if (opcao == 4) {
        listaClientes();
    }
    caso = 0;
    perguntas();
}

int cadastrarClientes() {
    /* Enquanto a quantidade for menor que o tamanho
       o sistema entenderá que ainda a espaço para mais
       cadastros */
    /* Nesse if o 'quantidade' serve, também, como
       posição do vetor :) */
    if (quantidade < tamanho) {
        Clientes customers;
        getchar();
        printf("Digite o nome do cliente: ");
        fgets(customers.nome, 30, stdin);

        customers.nome[strcspn(customers.nome, "\n")] = '\0';

        printf("Digite o seu endereco: ");
        fgets(customers.email, 50, stdin);


        printf("Digite seu numero de telefone: ");
        fgets(customers.telefone, 30, stdin);

        getchar();

        list[quantidade] = customers;

/*         fprintf(cliente, "\n\nID do cliente: %d\nNome do cliente: %s\nE-mail do cliente: %s\nEndereco do cliente: %s\nTelefone do cliente: %s",list[i].ID, list[i].nome, list[i].email, list[i].endereco, list[i].telefone);
 */        quantidade++;
        return 1;
    } else {
        printf("O sistema alcancou o limite maximo.\nPara contratar mais servicos ligue 4002-8922");
        return 0;
    }
}

void listaClientes() {
    printf("Lista de clientes\n");
    for (int i = 0; i < quantidade; i++) {
        printf("\nID do cliente: %d\n", list[i].ID);
        printf("Nome do cliente: %s\n", list[i].nome);
        printf("Endereco do cliente: %s\n", list[i].endereco);
        printf("Telefone do cliente: %s\n", list[i].telefone);
    }
    printf("\n");
}
