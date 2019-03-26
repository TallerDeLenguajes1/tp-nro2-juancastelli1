#include <stdio.h>
#include <stdlib.h>
#define N 4
#define M 5

int main(void){
	int f,c,i;
	double mt[N][M];
	int size;
	for (f = 0; f < N; ++f)
	{
		for (c = 0; c < M; ++c)//Poner valores de matriz en numero random
		{
			mt[f][c]=rand() % 25;
		}
	}
	for (i = 1; i < 21; ++i)
	{
		printf("%lf ", *(&mt[0][0]+(i-1)));
		if ((i%5) == 0 && i>0){
			printf("\n");//para que la matriz quede ordenada
		}
	}
}