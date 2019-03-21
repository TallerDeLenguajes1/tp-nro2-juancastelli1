#include <stdio.h>
#include <stdlib.h>
#define N 4
#define M 5

int main(void){
	int f,c;
	double mt[N][M];
	for (f = 0; f < N; ++f)
	{
		for (c = 0; c < M; ++c)//Poner valores de matriz en 0
		{
			mt[f][c]=0;
		}
	}

	for (f = 0; f < N; ++f)
	{
		for (c = 0; c < M; ++c)
		{
			printf("%lf ", mt[f][c]);//Para que salga ordenada
		}
		printf("\n");
	}
}
