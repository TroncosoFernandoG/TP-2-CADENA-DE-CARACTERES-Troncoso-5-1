/*10. Desarrolla un programa que busque la primera aparición de una
subcadena dentro de una cadena más larga. Mencionar si dicha subcadena
se encuentra y en qué posición se empieza.

Troncoso Fernando G 5°1°
*/


#include <stdio.h>
#include <string.h>

int main(){
	
	char cadena[100];
	char subcade[50];
	
	
	
	int i;
	
	printf("ingrese una palabras/palabras\n");
	fgets(cadena, sizeof(cadena), stdin);
	
	printf("ingrese la subcadena que desea encontrar\n");
	scanf("%s", subcade);
	
	int longi = strlen(cadena);
	
	char *ptr;
	
    ptr = strstr(cadena, subcade);
    
	if (ptr != NULL) {
    printf("La subcadena \"%s\" se encuentra en la cadena \"%s\" empezando en la posicion \"%d\"\n", subcade, cadena, ptr -cadena);
	}else
    {
	printf("La subcadena \"%s\" no se encuentra en la cadena \"%s\"\n", subcade, cadena);
	}
	
	
	return 0;
}
