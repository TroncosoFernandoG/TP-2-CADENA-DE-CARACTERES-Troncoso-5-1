/*7. Realiza un programa que determine si una cadena de caracteres ingresada
por el usuario es un anagrama de otra cadena también ingresada por el
usuario. Un anagrama es una palabra o frase formada por las mismas
letras de otra palabra o frase, pero en un orden diferente, como por
ejemplo "roma" y "amor".

Troncoso Fernando G 5°1°
*/


#include <stdio.h>
#include <string.h>

int main(){
	
	char cadena1[100];
	char cadena2[100];
	
	int i,j;
	
	int cantIguales=0;
	
	printf("Ingrese una palabra/frase\n");
	
	fgets(cadena1, sizeof(cadena1), stdin);
	
	printf("Ingrese otra palabra/frase\n");
	
	fgets(cadena2, sizeof(cadena2), stdin);
	
	int longi1 = strlen(cadena1);
	
	int longi2 = strlen(cadena2);
	
	if(longi1==longi2){
		for(i=0;i<longi1;i++){
			for(j=0;j<longi2;j++){
				
				if(cadena1[j]==cadena2[i]){
					cantIguales++;
					break;
				}
				
			}
		}
		
		if(cantIguales==longi1){
	
	    printf("Son anagramas\n");
	
	    }else{
		
	    printf("No son anagramas\n");
		
	    }
		
	    }
	    else{
		
	    printf("No son anagramas\n");
		
	}
	
	
	
	return 0;
}
