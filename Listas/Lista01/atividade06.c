#include <stdio.h>
#include <math.h>

int main () {
    float nota1, nota2, result;
    printf("Digite a primeira nota (obs: ente 1.0 e 10.0): ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota (obs: ente 1.0 e 10.0): ");
    scanf("%f", &nota2);
    result = ((nota1 * 3.5) + (nota2 * 7.5)) / 11;
    printf("A media do aluno e: %.2f", result);
}