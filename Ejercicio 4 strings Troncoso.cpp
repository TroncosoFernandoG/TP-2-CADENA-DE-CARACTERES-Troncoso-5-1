/*4. Realiza un programa que reemplace todas las apariciones de un carácter
en una cadena de caracteres ingresada por el usuario por otro carácter
también ingresado por el usuario.

Troncoso Fernando G 5°1°
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char palabra[50];
	char letra[2];
	char letraCam[2];
	
	    printf("Ingrese una palabra:\n");
	scanf("%s", palabra);
		printf("Ingrese la letra a reemplazar:\n");
	scanf("%s", letra);
		printf("Ingrese la letra que la reemplaza:\n");
	scanf("%s", letraCam);
	
	int largo=strlen(palabra);

	
	for(int i=0;i<largo;i++){
		if(palabra[i]==letra[0]){
			palabra[i]=letraCam[0];
		}
	}
	
	printf("%s", palabra);
	
	
	return 0;
}
