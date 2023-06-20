#include <stdio.h>
#include <string.h>

typedef struct {
    int dia, mes, ano;
} Data;

typedef struct {
    char nome[20];
    Data data;
    int numConta, numAgencia;
} Cliente;

typedef struct {
    Data dataDeposito;
    float valor;
    Cliente depositante;
    Cliente favorecido;
} Deposito;

int main() {

    Deposito deposito;

    printf("Digite a data do deposito: ");
    scanf("%d %d %d", &deposito.dataDeposito.dia, &deposito.dataDeposito.mes, &deposito.dataDeposito.ano);
    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito.valor);

    /* DEPOSITANTE */
    printf("Digite o nome do cliente depositante: ");
    scanf("%s", deposito.depositante.nome);
    printf("Digite a data de nascimento: ");
    scanf("%d %d %d", &deposito.depositante.data.dia, &deposito.depositante.data.mes, &deposito.depositante.data.ano);

    /* FAVORECIDO */
    printf("Digite o nome do cliente favorecido: ");
    scanf("%s", deposito.favorecido.nome);
    printf("Digite a data de nascimento do %s: ", deposito.favorecido.nome);
    scanf("%d %d %d", &deposito.favorecido.data.dia, &deposito.favorecido.data.mes, &deposito.favorecido.data.ano);

    /* EXIBIR DEPÓSITO */
    printf("\nDados do Deposito\n");
    printf("Data do deposito: %02d/%02d/%04d\n", deposito.dataDeposito.dia, deposito.dataDeposito.mes, deposito.dataDeposito.ano);
    printf("Valor do deposito: %.2f\n", deposito.valor);
    printf("Cliente depositante:\n");
    printf("Nome: %s\n", deposito.depositante.nome);
    printf("Data de nascimento: %02d/%02d/%04d\n", deposito.depositante.data.dia, deposito.depositante.data.mes, deposito.depositante.data.ano);
    printf("Cliente favorecido:\n");
    printf("Nome: %s\n", deposito.favorecido.nome);
    printf("Data de nascimento: %02d/%02d/%04d\n", deposito.favorecido.data.dia, deposito.favorecido.data.mes, deposito.favorecido.data.ano);

    return 0;

}