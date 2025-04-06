/*8. Realizar un programa que ingrese 5 palabras y devuelta la cadena de
caracteres repetidos más larga entre ellas (si ingreso metro, metralleta Y
metido debe devolver la cadena “met”)

Troncoso Fernando G 5°1°
*/


#include <stdio.h>
#include <string.h>

int main(){
	
	char cadena1[50];
	char cadena2[50];
	char cadena3[50];
	char cadena4[50];
	char cadena5[50];
	
	char cadenaAux[50];
	
	printf("Ingrese la palabra 1\n");
	
	scanf("%s", cadena1);
	
	printf("Ingrese la palabra 2\n");
	
	scanf("%s", cadena2);
	
	printf("Ingrese la palabra 3\n");
	
	scanf("%s", cadena3);
	
	printf("Ingrese la palabra 4\n");
	
	scanf("%s", cadena4);
	
	printf("Ingrese la palabra 5\n");
	
	scanf("%s", cadena5);
	
	int longi1 = strlen(cadena1);
	
	int longi2 = strlen(cadena2);
	
	int longi3 = strlen(cadena3);
	
	int longi4 = strlen(cadena4);
	
	int longi5 = strlen(cadena5);
	
	int calc[]={longi1, longi2, longi3, longi4, longi5};
	
	int aux=0;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(calc[j]>calc[j+1]){
				aux=calc[j+1];
				calc[j+1]=calc[j];
				calc[j]=aux;
			}
		}
	}
	
	for(int i=0;i<calc[5];i++){
		
		for(int j=0;j<calc[5];j++){
		
			for(int k=0;k<calc[5];k++){
		
				for(int l=0;l<calc[5];l++){
		
					for(int m=0;m<calc[5];m++){
		
		if(cadena1[i]==cadena2[j]==cadena3[k]==cadena4[l]==cadena5[m]){
			
			cadenaAux[i]=cadena1[i];
			
		}
		
											}
		
										}
		
									}
		
								}
		
							}
	
	printf("la cadena de caracteres mas repetida entre las 5 palabras es: %s", cadenaAux);
	
	return 0;
}
