#include<stdio.h>
#include<string.h>

int main (){
    int valor, bolean;
    float num1, num2;
    char letra, str[20]; 

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);
    
    printf("Digite dois numeros reais: ");
    scanf("%f%f", &num1, &num2);
    fflush(stdin); 
    
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    fflush(stdin);

    printf("Digite uma string: ");
    scanf("%s", str);
    fflush(stdin);
      
    printf("Digite 1 para verdadeiro e 0 para falso: ");
    scanf("%d", &bolean);

    printf("--------------------------------------------\n");

    printf("Numero Inteiro: %d\n", valor);
    printf("Numeros Reais: \n %.2f \n %.2f\n", num1, num2);
    printf("Letra: %c\n", letra);
    printf("String: %s\n", str);
    if (bolean == 1) {
        printf("Logico: Verdadeiro");
    } else {
        printf("Logico: Falso");
    }
}
