#include <stdio.h>
#include <ctype.h>
#include <string.h>

void remova(char *);

int main() {
    
    char cpf[12];
    int cont = 0;

    printf("Digite seu CPF: ");
    fgets(cpf, 12, stdin);

    for (int i = 0; cpf[i] != '\0'; i++) {
        if (cpf[i] == cpf[i + 1]) {
            cont++;
        }
    }

    while (cont == 10) {
        printf("Seu CPF nao pode ter numeros iguais, por favor, digite seu CPF novamente: ");
        fgets(cpf, 12, stdin);
        
        getchar();

        cont = 0;
    }

    remova(cpf);

    return 0;

}

void remova(char *CPF) {
    char nove[9];
    int cont = 10;
    int resultado = 0, resto = 0 ;
    for (int i = 0; i < 9; i++) {
        nove[i] = CPF[i];
        /* printf("%c", nove[i]); */
    }
    for (int i = 0; nove[i] != '\0'; i++) {
        resultado = resultado + nove[i] * cont;
        cont--;
    }
    resultado -= 2601;
    printf("%d", resultado);

    resto = resultado % 11;
}

/* 23231517117 */