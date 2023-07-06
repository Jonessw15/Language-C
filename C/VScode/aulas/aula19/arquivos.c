#include <stdio.h>

typedef struct {
    int id;
    char nome[50];
    float salario;
} Registro;

int main() {

    // CRIAR ARQUIVO
    FILE *arquivo = fopen("registro.txt", "w");

    // VERIFICA SE O ARQUIVO EXISTE
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    Registro ficha[5] = {
        {1, "Joao", 2500},
        {2, "Maria", 3000},
        {3, "Pedro", 2700},
        {4, "Ana", 2200},
        {5, "Jose", 2800}
    };

    for (int i = 0; i < 5; i++) {
        fprintf(arquivo, "%d, %s, %.2f\n", ficha[i].id, ficha[i].nome, ficha[i].salario);
    }

    fclose(arquivo);

    return 0;

}
