#include <stdlib.h>
#include <stdio.h>

void main (){
	int Buff[5] = {5,15,30,10,35};
	int *p;
	int i=0;
	p=Buff;
	//Notacion subindexada
	while (i<5){
		printf("%d ", Buff[i]);
		i++;
	}
	printf("\n");
	for (i=0;i<5;i++){
		printf("%d ", *(p+i));
	}
	printf("\n");
	for (i=0;i<5;i++){
		printf("%d ", *(Buff+i));
	}
	printf("\n");
	p=Buff;
	for (i=0;i<5;i++){
		printf("%p ", (p+i));
	}
	printf("\n");
	printf("Tamaño del puntero = %d\n", sizeof(p));
	printf("Tamaño del arreglo = %d\n", sizeof(Buff));
};
	
