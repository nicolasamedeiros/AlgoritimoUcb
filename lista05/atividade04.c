#include<stdio.h>
#include<string.h>

int main () {
    char nome[45], meio[15], ultimo[15];

    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);
    printf("Digite seu nome do meio: ");
    scanf("%s", meio);
    printf("Digite seu ultimo nome: ");
    scanf("%s", ultimo);

    strcat(nome, meio);
    strcat(nome, ultimo);

    printf("Nome completo: %s", nome);
}