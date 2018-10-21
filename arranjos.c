#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	// Stack
	int i;
	char arranjo[5];
	char *ponteiro;
	
	/*
	printf("endereco do arranjo = %p\n", &arranjo);
	printf("endereco do ponteiro = %p\n", &ponteiro);
	
	// Heap
	ponteiro = (char *) malloc(5);
	printf("conteudo do ponteiro = %p\n", ponteiro);
	free(ponteiro);*/
	
	for (i = 0; i < 5; i++) {
		printf("endereco do arranjo na posicao %d = %p\n",
					i, &arranjo[i]);
	}
	
	return 0;

}
