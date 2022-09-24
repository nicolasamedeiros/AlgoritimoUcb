#include<stdio.h>

int main (){
    int valor, bolean;
    float num1, num2;
    char letra, str[20];

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);
    printf("Digite dois numeros reais: ");
    scanf("%f%f", &num1, &num2);
    printf("Digite uma letra: \n");
    scanf("%c", &letra);
    printf("Digite uma string: \n");
    scanf("%s", str);
    printf("Digite 0 para verdadeiro e 1 para falso: \n");
    scanf("%d", bolean);
}
