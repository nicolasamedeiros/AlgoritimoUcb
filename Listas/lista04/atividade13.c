#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n; 
	int seq = 1, seqA = 0, seqAux; //variaveis para armazenar o numero atual e anterior da sequência, e uma auxiliar para trocar esses valores
	
	printf("Quantos termos da sequencia de Fibonacci deseja ver? ");
	scanf("%d", &n);
	
	printf("\n0 ");
	n--;
	
	while (n) {
		printf("%d ", seq);
		seqAux = seq;
		seq += seqA;
		seqA = seqAux;
		n--;
	}	  
	
	printf("\n\n");
	
	return 0;
}