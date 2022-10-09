#include<stdio.h>

int main() {
    float num1, num2, result;
    char op;

    printf("OPERACOES\n");
    printf("+ Adicao\n");
    printf("- Subtracao\n");
    printf("* Multiplicacao\n");
    printf("/ Divisao\n");

    printf("Digite a operacao que voce deseja com o simbolo: ");
    scanf("%c", &op);

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("O resultado da adicao e: %f", result);
        break;
            case '-':
            result = num1 - num2;
            printf("O resultado da subtracao e: %f", result);
            break;
                case '*':
                result = num1 * num2;
                printf("O resultado da multiplicacao e: %f", result);
                break;
                    case '/':
                    result = num1 / num2;
                    printf("O resultadp da divisao e: %f", result);
    default:
        printf("Impossivel fazer o calculo");
        break;
    }
}