#include<stdio.h>

int main() {
    int num, result;

    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &num);

        if (num >= 0) {
            result = num / 10;
        }
    }
}