#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 15

int main(void){
	int f,c;
	int* mt[N];
	srand(time(NULL));
	for (f = 0; f < N; ++f)
	{
		int num= rand() % 11 + 5;
		mt[f] = (int *) malloc(sizeof(int) * (num));
		for (c = 0; c < num; ++c)
		{
			mt[f][c] = rand() % 900 + 100;
			printf("%d  ", mt[f][c]);
		}
		printf("\n");
	}
}

