#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	char * nombre;
	int edad;
	int id;
}empleado;
empleado * empleadopunt;
void mostrar_emple (empleado * emple);

int main(void){
	printf("Tamaño en bytes de la estructura: %d\n", sizeof(empleado));
	empleadopunt = (empleado *) malloc (sizeof(empleado));
	(*empleadopunt).nombre = (char *)malloc(32);
	printf("Escriba su nombre:\n");
	gets((*empleadopunt).nombre);
	printf("Escriba su edad:\n");
	scanf("%d",&(*empleadopunt).edad);
	(*empleadopunt).id = 1;
	mostrar_emple (empleadopunt);
	return 0;
}

void mostrar_emple (empleado * emple){
	puts((*emple).nombre);
	printf("Edad:%d\n", (*emple).edad);
	printf("Id:%d\n", (*emple).id);
}