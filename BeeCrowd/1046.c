#include <stdio.h>

int main() {
    int hora1, hora2, cont = 0;
    scanf("%d", &hora1);
    scanf("%d", &hora2);

    if (hora1 > hora2) {
        while (hora1 > hora2) {
            hora1++;
            if (hora1 == 24) {
                hora1 = 0;
                break;
            }
            cont++;
        }

        if (hora1 <= hora2) {

        while (hora1 <= hora2) {
            hora1++;
            cont++;
        }
        }
    } else if (hora1 == hora2) {
        cont = 24;
    } else if (hora1 < hora2) {
        while (hora1 < hora2) {
            hora1++;
            cont++;
        }
        }        
    
    printf("O JOGO DUROU %d HORA(S)\n", cont);
}