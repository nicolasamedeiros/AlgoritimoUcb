#include<stdio.h>

int main () {
    int inteiro;
    float flutuante;
    char caractere;

    do
    {
        printf("Digite um numero Inteiro: ");
        scanf("%d", &inteiro);
    } while (inteiro < 1 || inteiro > 10);

    do
    {
        printf("Digite um numero flutuante: ");
        scanf("%f", &flutuante);
    } while (flutuante < 1 || flutuante > 9.9);

    do
    {
        printf("Digite um caractere: ");
        fflush(stdin);
        scanf("%c", &caractere);
    } while (caractere != 's');

    printf("Inteiro %d\n", inteiro);
    printf("Flutuante: %f\n", flutuante);
    printf("Caractere: %c", caractere);
       
}