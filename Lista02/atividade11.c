#include<stdio.h>
#include<math.h>

#define PI 3.14159;

int main () {
    float raio, area, volume;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    volume = (4/3.0) * PI * pow(raio, 3);
    area = 4 * PI * pow(raio, 2);

    printf("O valor da area e: %f", area);
    printf("O valor do volume da area e %f", volume);
}