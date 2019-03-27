#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct
{	
	char * tipo_cpu;
	int velocidad_proc;
	int fechafab;
	int cantnucleos;
}typedef Pc;
void caractpc(Pc compu);
char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium" };
void cargar (Pc * compus, int cant);
void listarpcs(Pc * lista, int cant);
void pcvieja(Pc * lista, int cant);
void pcveloz(Pc * lista, int cant);
Pc * arre;

int main(void){
	int cant;
	printf("Ingrese que cantidad de Pc quiere almacenar:");
	scanf("%d", &cant);
	arre = (Pc *) malloc(sizeof(Pc) * cant);
	cargar (arre, cant);
	listarpcs(arre,cant);
	pcvieja(arre,cant);
	pcveloz(arre,cant);
}

void caractpc(Pc compu){
	printf("Velocidad Procesador:%d\n", compu.velocidad_proc);
	printf("Fecha fabricacion:%d\n", compu.fechafab);
	printf("Tipo cpu:");
	puts(compu.tipo_cpu);
	printf("\n");
	printf("Cantidad de nucleos:%d\n", compu.fechafab);
	

}
/*void cargar (Pc * compus, int cant){
	int tipcpu;
	for (int i = 0; i < cant; ++i)
	{
		printf("Velocidad procesador de compu %d:\n", i);
		scanf("%d",&compus[i].velocidad_proc);
		printf("Año fabricacion de compu %d:\n", i);
		scanf("%d",&compus[i].fechafab);
		printf("Cantidad de nucleos de compu %d:\n", i);
		scanf("%d",&compus[i].cantnucleos);
		printf("Tipo de cpu:\n1-Intel\n 2-AMD\n 3-Celeron\n 4-Athlon\n 5-Core\n 6-Pentium");
		scanf("%d",&tipcpu);
		compus[i].tipo_cpu = tipos[tipcpu];

	}
}*/
void cargar (Pc * compus, int cant){
	for (int i = 0; i < cant; ++i)
	{
		compus[i].velocidad_proc=rand()%3 + 1;
		compus[i].fechafab=rand()%18 + 2000;
		compus[i].cantnucleos=rand()%4 + 1;
		compus[i].tipo_cpu = tipos[(rand()%6 + 1)];
	}
}

void listarpcs(Pc * lista, int cant){
	for (int i = 0; i < cant; ++i)
	{
		printf("Pc %d:\n", i);
		caractpc(*(lista + i));
		printf("\n");
	}
}

void pcvieja(Pc * lista, int cant){
	Pc pcvieja;
	pcvieja.fechafab = 9999;
	for (int i = 0; i < cant; ++i)
	{
		if (lista[i].fechafab < pcvieja.fechafab)
		{
			pcvieja = lista[i];
		}
	}
	caractpc(pcvieja);
}

void pcveloz(Pc * lista, int cant){
	printf("Las pcs mas veloces son:\n");
	for (int i = 0; i < cant; ++i)
	{
		if (lista[i].velocidad_proc == 3)
		{
			caractpc(lista[i]);
		}
	}
}
