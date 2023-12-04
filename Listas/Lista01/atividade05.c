#include<stdio.h>

	int main(){
		
		int quantidadeMetros, metros, quantidadeRolos, rolos = 50;
		
			
		printf("Digite a quatidade necessaria de metros para atender a obra: ");
		scanf("%d", &metros);
		
		quantidadeRolos = (metros / rolos);
		quantidadeMetros = (metros % 50);

			
		printf("quantidade de rolos necessaria: %i rolos\n", quantidadeRolos);
		
		printf("quantidade de metros avulsos: %i",quantidadeMetros);
	}
