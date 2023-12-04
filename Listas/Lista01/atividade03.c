#include<stdio.h>

int main () {
    float num1, num2, num3, result;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("Digite o terceiro numero");
    scanf("%f", &num3);
    result = (num1 + num2 + num3)/3;
    printf("A area do circulo e de %.2f", result);
}