#include<stdio.h>
#include<string.h>

int main () {
    char nome[50], email[30], endereco[35], reserva_nome[50], reserva_email[30], reserva_endereco[35];

    printf("Digite seu nome completo: ");
    gets(nome);
    printf("Digite seu email: ");
    gets(email);
    printf("Digite seu endereco: ");
    gets(endereco);

    strcpy(reserva_nome, nome);
    strcpy(reserva_email, email);
    strcpy(reserva_endereco, endereco);

    printf("Dados que tiveram backup\n");
    printf("Nome: %s\n", reserva_nome);
    printf("Email: %s\n", reserva_email);
    printf("Endereco: %s\n", reserva_endereco);
}