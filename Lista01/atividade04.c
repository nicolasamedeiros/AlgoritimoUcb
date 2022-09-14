#include <stdio.h>

int main () {
    int num1, num2;
    float result, resto;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    result = num1 / num2;
    resto = num1 % num2;
    printf("A parte inteira e de: %.0f \n", result);
    printf("O resto da divisao e de: %.0f \n", resto);
}