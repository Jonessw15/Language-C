#include <stdio.h>
#include <stdlib.h>

int main() {

    int senha, confirmaSenha;

    printf("Digite sua senha: \n");
    scanf("%d", &senha);

    do {
        printf("Digite sua senha novamente: \n");
        scanf("%d", &confirmaSenha);
    } while (senha != confirmaSenha);

    printf("Parabens, senha confirmada");
}
