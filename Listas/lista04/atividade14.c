#include<stdio.h>
int main(){
	
	int cont = 0, n, maior = 0, menor = 1000, soma = 0;
    float media;
	
    printf("Digite um numero: ");
	scanf("%d", &n);
	
	while (n > 0){
        
		if (n > maior)
			maior = n;
		if (n < menor)
			menor = n;

        soma += n;
        printf("Soma: %d", soma);
        cont++;
        printf("Digite um numero: ");	
		scanf("%d", &n);
	}

    media = soma/cont;
	
    printf("Maior: %d\n", maior);
	printf("Menor: %d\n", menor);
    printf("Media: %.2f\n", media);
		
}