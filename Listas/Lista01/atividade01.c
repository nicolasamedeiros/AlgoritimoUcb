#include<stdio.h>

//programa que calcula minutos e segudos de determinada hora

int main () {
    int horas, minutos, segundos;
    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);
    minutos = horas * 60;
    segundos = horas * 3600;
    printf("Horas: %d \n", horas);
    printf("Minutos: %d \n", minutos);
    printf("Segundos: %d \n", segundos);
}