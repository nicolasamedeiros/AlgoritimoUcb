#include<stdio.h>

int main () {
    float n1, n2 , n3, n4, media;

    printf("Digite a primeira nota do aluno: ");
    scanf("%.1f", &n1);
    fflush(stdin);
    printf("Digite a segunda nota do aluno: ");
    scanf("%.1f", &n2);
    fflush(stdin);
    printf("Digite a terceira nota do aluno: ");
    scanf("%.1f", &n3);
    fflush(stdin);
    printf("Digite a quarta nota do aluno: ");
    scanf("%.1f", &n4);
    fflush(stdin);

    media = (n1*2) + (n2*3) + (n3*4) + (n4*1) / (2 + 3 + 4 + 1);

    printf("Media: %.2f", media);
    printf("Salve");
}