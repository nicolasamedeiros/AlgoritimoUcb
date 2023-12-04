#include<stdio.h>
#include<string.h>

int main () {
    char nome[50];

    printf("Digite seu nome completo: ");
    gets(nome);

    printf("Quantidade de caracteres digitado = %zu", strlen(nome));
}