#include <stdio.h>
#include <stdlib.h>
/*
int **alocarMatriz1(int nrows, int ncols) {
		int i;
		int **matrix = (int **) malloc(sizeof(int *) * nrows); 40 // bytes
		
		for (i = 0; i < nrows; i++) {
				matrix[i] = (int *) malloc(sizeof(int) * ncols); // 4*10 = 40 bytes 
			}
			
			return matrix;
}*/

void alocarMatriz1(int ***matrix, int nrows, int ncols) {
	int i;
	*matrix = (int **) malloc(sizeof(int *) * nrows); // 40 bytes
	
	for (i = 0; i < nrows; i++) {
			(*matrix)[i] = (int *) malloc(sizeof(int) * ncols); // 40 bytes
		}
}

void desalocarMatriz1(int **matrix, int nrows) {
	int i;
	
	for (i = 0; i < nrows; i++) {
		free(matrix[i]);
	}
	
	free(matrix);
}

int main(int argc, char *argv[]) {
	int ** matrix;
	
	alocarMatriz1(&matrix, 5, 10); // 0xffaa
	printf("Valor: %d\n", matrix[0][2]);
	desalocarMatriz1(matrix, 5);
	
	return 0;
}
