#include <stdio.h>
#include <stdlib.h>

int main() {

    int x;

    printf("Digite X");
    scanf("%d", &x);

    for (int i = 5; i > 0; i--) {
        printf("%d", x * i);
    }
}
