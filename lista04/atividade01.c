#include<stdio.h>

int main () {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for(int i = 0; i <= num; i++) {
        printf("numero: %d\n", i);
    }
}