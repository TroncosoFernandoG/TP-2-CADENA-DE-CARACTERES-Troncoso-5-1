/*3. Realiza un programa que determine si una cadena de caracteres ingresada
por el usuario es palíndromo (se lee igual de izquierda a derecha que de
derecha a izquierda).

Troncoso Fernando 5°1°
*/
#include <stdio.h>
#include <string.h>

int main (){

char palabra[50];
char arbalap[50];

printf("Ingrese la palabra que desee verificar si es palíndromo\n");

scanf("%s", palabra);

strcpy(arbalap, palabra);

int largo = strlen(palabra);

int cont = 0;
int cont2 = largo-1;

for(int i=0;i<largo;i++){
	if(palabra[i]==arbalap[cont2]){
		cont++;
		cont2--;
	}
	
	
}

if(cont==largo){
	printf("la palabra es Palindromo\n");
}
else{
		printf("la palabra no es Palindromo\n");
}



return 0;
}
