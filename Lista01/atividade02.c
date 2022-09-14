#include<stdio.h>

int main () {
    int diametro, raio;
    float result;
    printf("Digite o valor do diametro do circulo: ");
    scanf("%d", &diametro);
    raio = diametro / 2;
    result = 3.14 * (raio*raio);
    printf("O valor da area e de %.2f", result);
}