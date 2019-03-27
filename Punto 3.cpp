#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 15

int main(void){
	int f,c,cont;
	int** mt;
	int * arre = (int*) malloc(sizeof(int)*15);
	mt = (int **) malloc(sizeof(int*)*N);
	srand(time(NULL));
	for (f = 0; f < N; ++f)
	{
		cont = 0;
		int num= rand() % 11 + 5;
		mt[f] = (int *) malloc(sizeof(int) * (num));
		for (c = 0; c < num; ++c)
		{
			mt[f][c] = rand() % 900 + 100;
			printf("%d  ", mt[f][c]);
			if ((mt[f][c]%2)==0)
			{
				cont++;
			}
		}
		arre[f] = cont;
		printf("\n");
	}
	printf("\nCantidad de pares por fila:");
	for (int i = 0; i < N; ++i)
	{
		printf("%d  ", arre[i]);
	}
}

