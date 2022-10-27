#include <stdio.h>

int main () {
    int iniciar;

    printf("Deseja iniciar o algoritimo ?");
    printf("Digite 1 para sim e 2 para nao");
    scanf("%d", &iniciar);

    while (iniciar == 1)
    {
        printf("Rodando while");
        printf("Usuario deseja continuar ? 1 - continuar");
        scanf("%d", &iniciar);
    }
    
}