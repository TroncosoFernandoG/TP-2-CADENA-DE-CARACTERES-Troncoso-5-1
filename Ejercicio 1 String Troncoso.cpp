/*1. Pedir al usuario que ingrese su nombre y luego imprimirlo en pantalla.

Troncoso Fernando G 5°1°
*/

#include <stdio.h>
#include <string.h>

int main(){
	
	char nombre[50];
	printf("Ingrese su Nombre:\n");
	scanf("%s", nombre);
	printf("\n Su nombre es: %s", nombre);
	
	return 0;

}
