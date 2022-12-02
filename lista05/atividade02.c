#include<stdio.h>
#include<string.h>

int main () {
    char cor[7];
    char white[] = "branco", green[] = "verde", yellow[] = "amarelo";

    printf("(Digite branco, verde ou amarelo)\n");
    printf("Digite uma cor: ");
    scanf("%s", cor);

    if (strcmp(cor,white) == 0){
        printf("Sao iguais");
        return 0;
    }
    else if (strcmp(cor,green) == 0) {
        printf("Sao iguais");
        return 0;
    }
    else if (strcmp(cor,yellow) == 0) {
        printf("Sao iguais");
        return 0;
    }
    else {
        printf("Nao sao iguais");
        return 0;
    }
}