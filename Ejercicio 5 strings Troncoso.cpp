/*5. Escribe un programa que cuente el número de palabras en una cadena
ingresada por el usuario.

Troncoso Fernando 5°1°
*/

#include <stdio.h>
#include <string.h>

int main(){
	
	char cadena[100];
	
	int contpalabras=0;
	
	fgets(cadena, sizeof(cadena), stdin);
	
	int longi = strlen(cadena);
	
	for(int i=0;i<longi;i++){
		if(cadena[i]==' '||cadena[i]=='\n'){
			contpalabras++;
		}
	}
	
	printf("%d",contpalabras);
	
	return 0;
}
