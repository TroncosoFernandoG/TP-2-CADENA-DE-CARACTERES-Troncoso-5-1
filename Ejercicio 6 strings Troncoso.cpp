/*6) Crea un programa que invierta el orden de las palabras en una cadena (por
ejemplo, "Hola mundo" se convierte en "mundo Hola").

Troncoso Fernando 5°1°
*/

#include <stdio.h>
#include <string.h>

int main(){
	
	char cadena[100];
	
	int i;
	
	printf("ingrese una frase\n");
	fgets(cadena, sizeof(cadena), stdin);
	
	int longi = strlen(cadena);
	
for(int i=0;i<longi;i++){
		if(cadena[i]==' '||cadena[i]=='\n'){
			
		}
	}
	
	
	return 0;
}
