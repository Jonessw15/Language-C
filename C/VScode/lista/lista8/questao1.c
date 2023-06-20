#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[20];
    int dia, mes, ano;
    int numConta, numAgencia;
} Cliente;

int main() {

    Cliente conta;

    printf("Digite o nome do cliente: ");
    fgets(conta.nome, 20, stdin);

    conta.nome[strcspn(conta.nome, "\n")] = '\0';

    printf("Digite a data de nascimento do %s: ", conta.nome);
    scanf("%d %d %d", &conta.dia, &conta.mes, &conta.ano);
    printf("Digite o numero da conta do %s: ", conta.nome);
    scanf("%d", &conta.numConta);
    printf("Digite o numero da agencia do %s: ", conta.nome);
    scanf("%d", &conta.numAgencia);

    return 0;

}