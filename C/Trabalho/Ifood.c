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
void listaClientesArquivo();
int cadastrarClientes();

/* VARIAVEIS GLOBAIS */
int tamanho = 1000;
Clientes list[1000];
Ifood listProd[1000];
int quantidade = 0;
int caso = 0;
int quantidadeProdutos = 0;

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
    while (caso != 11) {
        selecionarFuncao(caso);
    }
    printf("Obrigado pela visita");

    fclose(arquivo);
    fclose(cliente);

}

void perguntas() {
    while (caso > 0 || caso <= 11) {
        while (caso > 0 || caso <= 11) {
            printf("Bem vindo, meu consagrado\n\n");
            printf("1) Cadastro de Produtos\n");
            printf("2) Listar Produtos\n");
            printf("3) Cadastro de Clientes\n");
            printf("4) Listar Clientes\n");
            printf("5) Realiza Pedidos\n");
            printf("11) Sair do Programa\n\n");
            printf("Escolha: ");
            scanf("%d", &caso);

            system("cls");

            if (caso > 0 || caso <= 11) {
                break;
            }
        }
        if (caso > 0 || caso <= 11) {
            break;
        }
    }
}

void selecionarFuncao(int opcao) {
    if (opcao == 1) {
        printf("\nCadastro de produtos\n\n");
        cadastrarProdutos();
    } else if (opcao == 2) {
        printf("\nLista de produtos\n\n");
        listaProdutos();
    } else if (opcao == 3) {
        printf("\nCadastro de clientes\n\n");
        cadastrarClientes();
    } else if (opcao == 4) {
        listaClientes();
    } else if (opcao == 5) {
        listaClientesArquivo();
    }
    caso = 0;
    perguntas();
}

//FUNÇÃO DE CADASTRAR PRODUTOS QUE O CLAITON FEZ
int cadastrarProdutos(){
    if (quantidadeProdutos < tamanho) {
        Ifood produtos;
        getchar();
        printf("Digite o nome do produto: ");
        fgets(produtos.nomeProduto, 30, stdin);

        produtos.nomeProduto[strcspn(produtos.nomeProduto, "\n")] = '\0';

        printf("Digite a descricao do produto: ");
        fgets(produtos.descricao, 50, stdin);

        produtos.descricao[strcspn(produtos.descricao, "\n")] = '\0';


        printf("Digite o preco do produto: ");
        scanf("%f", &produtos.preco);

        getchar();
        listProd[quantidade] = produtos;
        quantidadeProdutos++;
        return 1;
    } else {
        printf("O sistema alcancou o limite maximo.\nPara contratar mais servicos ligue 4002-8922");
        return 0;
    }
}
//LISTAR PRODUTOS QUE O CLAITON FEZ
void listaProdutos(){
    for (int i = 0; i < quantidadeProdutos; i++) {
        printf("\nID do Produto: %d\n", listProd[i].ID);
        printf("Nome do produto: %s\n", listProd[i].nomeProduto);
        printf("Descricao do produto: %s\n", listProd[i].descricao);
        printf("Preco do produto: %2.f\n", listProd[i].preco);
    }
    printf("\n");
}

int cadastrarClientes() {
    /* Enquanto a quantidade for menor que o tamanho
       o sistema entenderá que ainda a espaço para mais
       cadastros */
    /* Nesse if o 'quantidade' serve, também, como
       posição do vetor :) */
       FILE *cliente = fopen("cadastroCliente.txt", "a+");

    srand(time(NULL));
    int numeroAleatorio = rand() % 1000 + 1;

    if (quantidade < tamanho) {
        Clientes customers;
        getchar();
        customers.ID = numeroAleatorio;

        printf("Digite o nome do cliente: ");
        fgets(customers.nome, 30, stdin);

        customers.nome[strcspn(customers.nome, "\n")] = '\0';

        printf("Digite o seu endereco: ");
        fgets(customers.endereco, 50, stdin);

        customers.endereco[strcspn(customers.endereco, "\n")] = '\0';

        printf("Digite seu e-mail: ");
        fgets(customers.email, 100, stdin);

        customers.email[strcspn(customers.email, "\n")] = '\0';

        printf("Digite seu numero de telefone: ");
        fgets(customers.telefone, 30, stdin);

        customers.telefone[strcspn(customers.telefone, "\n")] = '\0';

        list[quantidade].ID = numeroAleatorio;
        list[quantidade] = customers;

        fprintf(cliente, "%d\n", quantidade);
        fprintf(cliente, "%d\n %s\n %s\n %s\n %s\n\n", list[quantidade].ID, list[quantidade].nome, list[quantidade].email, list[quantidade].endereco, list[quantidade].telefone);
        quantidade++;

        fclose(cliente);
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
        printf("E-mail do cliente: %s\n", list[i].email);
        printf("Telefone do cliente: %s\n\n", list[i].telefone);
    }
    printf("\n");
    int IDescolhido;
    printf("Deseja editar algum usuario? Digite seu ID se sim ou '0' para nao: ");
    scanf("%d", &IDescolhido);

    FILE *cliente = fopen("cadastroCliente.txt", "r+");

    for (int i = 0; i < quantidade; i++) {
        
        int continua = 0;
        int cont = quantidade;
        if (IDescolhido == list[i].ID) {
            printf("Edicao do usuario: %s\n\n", list[i].nome);
            printf("Deseja realmente editar? Digite '1' para nao ou qualquer numero para continuar ");
            scanf("%d", &continua);

            system("cls");

            if (continua == 1) {
                continue;
            } else {
                getchar();

                int op;
                printf("Caso queira editar um certo valor digite '0'\n\n");
                fprintf(cliente, "%d\n", cont);
                fprintf(cliente, "%d\n", list[i].ID);
                printf("Deseja editar seu nome? ");
                scanf("%d", &op);

                if (op == 0) {
                    getchar();
                    printf("Edite seu nome: ");
                    fgets(list[i].nome, 30, stdin);
                    op = 1;
                }

                printf("Deseja editar seu endereco? ");
                scanf("%d", &op);
                
                if (op == 0) {
                    getchar();
                    printf("Edite seu endereco: ");
                    fgets(list[i].endereco, 30, stdin);
                    op = 1;
                }

                printf("Deseja editar seu e-mail? ");
                scanf("%d", &op);

                if (op == 0) {
                    getchar();
                    printf("Edite seu e-mail: ");
                    fgets(list[i].email, 30, stdin);
                    op = 1;
                }      

                printf("Deseja editar seu telefone? ");
                scanf("%d", &op);

                if (op == 0) {
                    getchar();
                    printf("Edite seu telefone: ");
                    fgets(list[i].telefone, 30, stdin);
                    op = 1;
                }      

                list[i].nome[strcspn(list[i].nome, "\n")] = '\0';
                list[i].endereco[strcspn(list[i].endereco, "\n")] = '\0';
                list[i].email[strcspn(list[i].email, "\n")] = '\0';
                list[i].telefone[strcspn(list[i].telefone, "\n")] = '\0';

                fprintf(cliente, "%s\n", list[i].nome);
                fprintf(cliente, "%s\n", list[i].endereco);
                fprintf(cliente, "%s\n", list[i].email);
                fprintf(cliente, "%s\n\n\n", list[i].telefone);

            }
        }
    }



}

void listaClientesArquivo() {
    FILE *arquivo = fopen("cadastroCliente.txt", "r");
    if (arquivo) {
        fscanf(arquivo, "%d\n", &quantidade);
        for (int i = 0; i < quantidade; i++) {
            Clientes customers;
            fscanf(arquivo, "%d\n", &customers.ID);
            fgets(customers.nome, 30, arquivo);
            customers.nome[strcspn(customers.nome, "\n")] = '\0';
            fgets(customers.endereco, 50, arquivo);
            customers.endereco[strcspn(customers.endereco, "\n")] = '\0';
            fgets(customers.email, 100, arquivo);
            customers.email[strcspn(customers.email, "\n")] = '\0';
            fgets(customers.telefone, 30, arquivo);
            customers.telefone[strcspn(customers.telefone, "\n")] = '\0';
            list[i] = customers;
        }

        fclose(arquivo);
    } else {
        printf("ERRO");
    }
}
