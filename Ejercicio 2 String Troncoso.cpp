/*2. Realiza un programa que cuente cuántas vocales tiene una cadena de
caracteres ingresada por el usuario.

Troncoso Fernando G 5°1°
*/

#include <stdio.h>
#include <string.h>

int main(){
	
	char Cadena[100];
	
	int i, CantVo=0;
	

	
	printf("Ingrese una palabra:\n");
	scanf("%s", Cadena);
	
int Long=strlen(Cadena);
	
	for(i=0;i<Long;i++){
		
		if(Cadena[i]=='a'||Cadena[i]=='e'||Cadena[i]=='i'||Cadena[i]=='o'||Cadena[i]=='u'){
			CantVo++;
		}
	}
	
	printf("%d", CantVo);
	
	return 0;
}
