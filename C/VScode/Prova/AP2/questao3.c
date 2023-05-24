#include <stdio.h>

void validaSenha(int);

int main() {

    int senha;

    printf("Digite sua senha: ");
    scanf("%d", &senha);

    validaSenha(senha);

    return 0;

}

void validaSenha(int valida) {
    if (valida > 0 && valida % 2 == 1) {
        printf("*************************\n");
        printf("SEJA BEM VINDO AO SISTEMA\n");
        printf("*************************\n");
    } else {
        printf("********************\n");
        printf("SISTEMA INDISPONIVEL\n");
        printf("********************\n");

    }
}