#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

typedef struct {
    char nomeProduto[50];
    char descricao[300];
    char preco[30];
    int ID;
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
    char pedidoValor[30];
    int ID;
    Clientes idCliente;
    int dia, mes, ano;
} Pedidos;

typedef struct {
    char nomeCliente[30];
    char nomeProduto[30];
    int IDcliente;
    int IDproduto;
} SalvarPedidos;

void quantidadeDeNumClientes();
void quantidadeDeNumProdutos();
void quantidadeDeNumPedidos();
void perguntas();
void selecionarFuncao(int);
void listaClientes();
void editaClientes();
void listaClientesArquivo();
void listaProdutos();
void editaProdutos();
void listaProdutosArquivos();
void lerPedidos();
void realizarPedido();
void listarPedidosArquivos();
int cadastrarClientes();
int cadastrarProdutos();

/* VARIAVEIS GLOBAIS */
int tamanho = 1000;
Clientes list[1000];
Ifood listProd[1000];
SalvarPedidos listSave[1000];
int quantidade = 0;
int caso = 0;
int quantidadeProdutos = 0;
int quantidadePedidos = 0;

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

void quantidadeDeNumClientes() {
    FILE *arq = fopen("cadastroCliente.txt", "w");

    fprintf(arq, "%d\n", quantidade);
    for (int i = 0; i < quantidade; i++) {
        fprintf(arq, "%d\n %s\n %s\n %s\n %s\n\n", list[i].ID, list[i].nome, list[i].email, list[i].endereco, list[i].telefone);
    }
}

void quantidadeDeNumProdutos() {
    FILE *arq = fopen("cadastro.txt", "w");

    fprintf(arq, "%d\n", quantidadeProdutos);
    for (int i = 0; i < quantidadeProdutos; i++) {
        fprintf(arq, "%d\n%s\n%s\n%s\n", listProd[i].ID, listProd[i].nomeProduto, listProd[i].descricao, listProd[i].preco);
    }
}

void quantidadeDeNumPedidos() {
    FILE *arq = fopen("produtos.txt", "w");

    fprintf(arq, "%d\n", quantidadePedidos);
    for (int i = 0; i < quantidadePedidos; i++) {
        fprintf(arq, "%d\n%s\n%d\n%s\n", listSave[i].IDcliente, listSave[i].nomeCliente, listSave[i].IDproduto, listSave[i].nomeProduto);
    }
//    for (int )
}

void perguntas() {
    while (caso > 0 || caso <= 11) {
        while (caso > 0 || caso <= 11) {
            printf("Bem vindo, meu consagrado\n\n");
            printf("1) Cadastro de Produtos\n");
            printf("2) Editar Produtos\n");
            printf("3) Cadastro de Clientes\n");
            printf("4) Editar Clientes\n");
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
        editaProdutos();
    } else if (opcao == 3) {
        printf("\nCadastro de clientes\n\n");
        cadastrarClientes();
    } else if (opcao == 4) {
        editaClientes();
    } else if (opcao == 5) {
        realizarPedido();
    }
    caso = 0;
    perguntas();
}

//FUNÇÃO DE CADASTRAR PRODUTOS QUE O CLAITON FEZ
int cadastrarProdutos(){
    listaProdutosArquivos();
    srand(time(NULL));
    FILE *produt = fopen("cadastro.txt", "a+");
    int numeroAleatorio2 = rand() % 1000 + 1;

    if (quantidadeProdutos < tamanho) {
        Ifood produtos;
        getchar();
        produtos.ID = numeroAleatorio2;
        printf("Digite o nome do produto: ");
        fgets(produtos.nomeProduto, 30, stdin);

        produtos.nomeProduto[strcspn(produtos.nomeProduto, "\n")] = '\0';

        printf("Digite a descricao do produto: ");
        fgets(produtos.descricao, 50, stdin);

        produtos.descricao[strcspn(produtos.descricao, "\n")] = '\0';

        printf("Digite o preco do produto: ");
        fgets(produtos.preco, 30, stdin);

        produtos.preco[strcspn(produtos.preco, "\n")] = '\0';

        listProd[quantidadeProdutos].ID = numeroAleatorio2;
        listProd[quantidadeProdutos] = produtos;

        fprintf(produt, "%d\n%s\n%s\n%s\n\n", listProd[quantidade].ID, listProd[quantidade].nomeProduto, listProd[quantidade].descricao, listProd[quantidade].preco);
        quantidadeProdutos++;
        quantidadeDeNumProdutos();
        fclose(produt);
        return 1;
    } else {
        printf("O sistema alcancou o limite maximo.\nPara contratar mais servicos ligue 4002-8922");
        return 0;
    }
}

void listaProdutos() {
    listaProdutosArquivos();
     for (int i = 0; i < quantidadeProdutos; i++) {
        printf("\nID do Produto: %d\n", listProd[i].ID);
        printf("Nome do produto: %s\n", listProd[i].nomeProduto);
        printf("Descricao do produto: %s\n", listProd[i].descricao);
        printf("Preco do produto: %s\n", listProd[i].preco);
    }
}

//LISTAR PRODUTOS QUE O CLAITON FEZ
void editaProdutos(){
    listaProdutosArquivos();
    listaProdutos();
    printf("\n");

    int IDescolhido;
    printf("Deseja editar algum usuario? Digite seu ID se sim ou '0' para nao: ");
    scanf("%d", &IDescolhido);

    FILE *produto = fopen("cadastro.txt", "r+");
    FILE *arquivo = fopen("cadastro.txt", "w");

    for (int i = 0; i < quantidadeProdutos; i++) {

        int continua = 0;
        if (IDescolhido == listProd[i].ID) {
            printf("Edicao do produto: %s\n\n", listProd[i].nomeProduto);
            printf("Deseja realmente editar? Digite '1' para nao ou qualquer numero para continuar ");
            scanf("%d", &continua);

            system("cls");

            if (continua == 1) {
                continue;
            } else {
                getchar();

                int op;
                printf("Caso queira editar um certo valor digite '0'\n\n");
                fprintf(produto, "%d\n", listProd[i].ID);
                printf("Deseja editar seu nome? ");
                scanf("%d", &op);

                if (op == 0) {
                    getchar();
                    printf("Edite seu nome: ");
                    fgets(listProd[i].nomeProduto, 30, stdin);
                    op = 1;
                }

                printf("Deseja editar sua descricao? ");
                scanf("%d", &op);

                if (op == 0) {
                    getchar();
                    printf("Edite sua descricao: ");
                    fgets(listProd[i].descricao, 300, stdin);
                    op = 1;
                }

                printf("Deseja editar seu preco? ");
                scanf("%d", &op);

                if (op == 0) {
                    getchar();
                    printf("Edite seu preco: ");
                    fgets(listProd[i].preco, 30, stdin);
                }

                listProd[i].nomeProduto[strcspn(listProd[i].nomeProduto, "\n")] = '\0';
                listProd[i].descricao[strcspn(listProd[i].descricao, "\n")] = '\0';
                listProd[i].preco[strcspn(listProd[i].preco, "\n")] = '\0';

                fprintf(produto, "%s\n", listProd[i].nomeProduto);
                fprintf(produto, "%s\n", listProd[i].descricao);
                fprintf(produto, "%s\n", listProd[i].preco);

                fclose(produto);
            }
            if (IDescolhido != list[i].ID) {
                fprintf(arquivo, "%d\n", listProd[i].ID);
                fprintf(arquivo, "%s\n", listProd[i].nomeProduto);
                fprintf(arquivo, "%s\n", listProd[i].descricao);
                fprintf(arquivo, "%s\n", listProd[i].preco);
                quantidadeDeNumProdutos();
            } else {
                printf(arquivo, "%d\n", listProd[i].ID);
                fprintf(arquivo, "%s\n", listProd[i].nomeProduto);
                fprintf(arquivo, "%s\n", listProd[i].descricao);
                fprintf(arquivo, "%s\n", listProd[i].preco);
                quantidadeDeNumProdutos();
            }
        }
        quantidadeDeNumProdutos();
    }
}

void listaProdutosArquivos() {
    FILE *arquivo = fopen("cadastro.txt", "r");
    if (arquivo) {
        fscanf(arquivo, "%d\n", &quantidadeProdutos);
        for (int i = 0; i < quantidadeProdutos; i++) {
            Ifood produtos;
            fscanf(arquivo, "%d\n", &produtos.ID);
            fgets(produtos.nomeProduto, 50, arquivo);
            produtos.nomeProduto[strcspn(produtos.nomeProduto, "\n")] = '\0';
            fgets(produtos.descricao, 300, arquivo);
            produtos.descricao[strcspn(produtos.descricao, "\n")] = '\0';
            fgets(produtos.preco, 30, arquivo);
            produtos.preco[strcspn(produtos.preco, "\n")] = '\0';
            listProd[i] = produtos;
        }
        fclose(arquivo);
    } else {
        printf("ERRO!");
    }
}

int cadastrarClientes() {
    /* Enquanto a quantidade for menor que o tamanho
       o sistema entenderá que ainda a espaço para mais
       cadastros */
    /* Nesse if o 'quantidade' serve, também, como
       posição do vetor :) */
    listaClientesArquivo();

    FILE *cliente = fopen("cadastroCliente.txt", "a+");

    srand(time(NULL));
    int numeroAleatorio = rand() % 1000 + 1;

    fprintf(cliente, "%d\n", quantidade + 1);
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

        fprintf(cliente, "%d\n %s\n %s\n %s\n %s\n\n", list[quantidade].ID, list[quantidade].nome, list[quantidade].email, list[quantidade].endereco, list[quantidade].telefone);
        quantidade++;

        fclose(cliente);
        quantidadeDeNumClientes();
        return 1;
    } else {
        printf("O sistema alcancou o limite maximo.\nPara contratar mais servicos ligue 4002-8922");
        return 0;
    }

}

void listaClientes() {
    listaClientesArquivo();
    for (int i = 0; i < quantidade; i++) {
        printf("\nID do cliente: %d\n", list[i].ID);
        printf("Nome do cliente: %s\n", list[i].nome);
        printf("Endereco do cliente: %s\n", list[i].endereco);
        printf("E-mail do cliente: %s\n", list[i].email);
        printf("Telefone do cliente: %s\n\n", list[i].telefone);
    }
}

void editaClientes() {
    listaClientesArquivo();
    printf("Lista de clientes\n");
    listaClientes();

    printf("\n");
    int IDescolhido;
    printf("Deseja editar algum usuario? Digite seu ID se sim ou '0' para nao: ");
    scanf("%d", &IDescolhido);

    FILE *cliente = fopen("cadastroCliente.txt", "r+");
    FILE *arquivo = fopen("cadastroCliente.txt", "w");

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

                fclose(cliente);
            }
    }
    if (IDescolhido != list[i].ID) {
        fprintf(arquivo, "%d\n", list[i].ID);
        fprintf(arquivo, "%s\n", list[i].nome);
        fprintf(arquivo, "%s\n", list[i].endereco);
        fprintf(arquivo, "%s\n", list[i].email);
        fprintf(arquivo, "%s\n\n\n", list[i].telefone);
        quantidadeDeNumClientes();
    } else {
        fprintf(arquivo, "%d\n", list[i].ID);
        fprintf(arquivo, "%s\n", list[i].nome);
        fprintf(arquivo, "%s\n", list[i].endereco);
        fprintf(arquivo, "%s\n", list[i].email);
        fprintf(arquivo, "%s\n\n\n", list[i].telefone);
        quantidadeDeNumClientes();
    }
    }
    quantidadeDeNumClientes();
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

void lerPedidos() {
    listarPedidosArquivos();
    for (int i = 0; i < quantidade; i++) {
        printf("\nID do cliente: %d\n", listSave[i].IDcliente);
        printf("Nome do cliente: %s\n", listSave[i].nomeCliente);
        printf("Endereco do cliente: %s\n", listSave[i].IDproduto);
        printf("E-mail do cliente: %s\n", listSave[i].nomeProduto);
    }
}

void realizarPedido() {
    listaClientes();
    listaClientesArquivo();
    listaProdutosArquivos();
    listarPedidosArquivos();
    int IDescolhido;
    printf("\nDeseja editar algum usuario? Digite seu ID se sim ou '0' para nao: ");
    scanf("%d", &IDescolhido);
        quantidadePedidos++;

    FILE *arq = fopen("produtos.txt", "r");
    FILE *produtos = fopen("produtos.txt", "w");

    fprintf(arq, "%d\n", quantidadePedidos);
    lerPedidos();
    for (int i = 0; i < quantidade; i++) {

        int continua = 0;
        int cont = 0;

        if (IDescolhido == list[i].ID) {
            printf("Pedido para usuario: %s\n\n", list[i].nome);
            printf("Deseja realmente fazer um pedido? Digite '1' para nao ou qualquer numero para continuar ");
            scanf("%d", &continua);

            system("cls");

            if (continua == 1) {
                quantidadePedidos--;
                continue;
            } else {

                listSave[i].IDcliente = list[i].ID;
                fprintf(produtos, "%d\n", listSave[i].IDcliente);
                strcpy(listSave[i].nomeCliente, list[i].nome);
                fprintf(produtos, "%s\n", listSave[i].nomeCliente);

                listaProdutos();
                int IDescolhidoProd;
                printf("Selecione um produto pelo seu ID para inserir no seu pedido: ");
                scanf("%d", &IDescolhidoProd);

                for (int j = 0; j < quantidadeProdutos; j++) {
                    if (IDescolhidoProd == listProd[j].ID) {
                        listSave[i].IDproduto = listProd[i].ID;
                        fprintf(produtos, "%d\n", listSave[i].IDproduto);
                        strcpy(listSave[i].nomeProduto, listProd[i].nomeProduto);
                        fprintf(produtos, "%s\n", listSave[i].nomeProduto);
                    }
                }

                /* int op;
                while (op != 0) {
                    printf("Deseja adicionar mais algum produto? Se nao digite '0', se sim digite '1");
                    scanf("%d", &op);

                    if (op == 0) {
                        break;
                    }

                    fprintf(arq, "%d\n", listProd[i].ID);
                    fprintf(arq, "%s\n", listProd[i].nomeProduto);
                } */
                quantidadeDeNumPedidos();

                fclose(arq);
                fclose(produtos);
            }
        }
        quantidadeDeNumPedidos();
    }

}

void listarPedidosArquivos() {
    FILE *arquivo = fopen("produtos.txt", "r");

    if (arquivo) {
        fscanf(arquivo, "%d\n", &quantidadePedidos);
        for (int i = 0; i < quantidadePedidos; i++) {
            SalvarPedidos save;
            fscanf(arquivo, "%d\n", &save.IDcliente);
            fgets(save.nomeCliente, 30, arquivo);
            save.nomeCliente[strcspn(save.nomeCliente, "\n")] = '\0';
            fscanf(arquivo, "%d\n", &save.IDproduto);
            fgets(save.nomeProduto, 30, arquivo);
            save.nomeProduto[strcspn(save.nomeProduto, "\n")] = '\0';
            listSave[i] = save;
        }
        fclose(arquivo);
    } else {
        printf("ERRO");
    }
}
