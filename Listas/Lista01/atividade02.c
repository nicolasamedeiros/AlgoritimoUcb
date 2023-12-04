#include<stdio.h>
#include<math.h>

#define PI 3.14

int main () {
    int diametro, raio;
    float result;
    printf("Digite o valor do diametro do circulo: ");
    scanf("%d", &diametro);
    raio = diametro / 2;
    result = PI * pow(raio,2);
    printf("O valor da area e de %.2f", result);
}