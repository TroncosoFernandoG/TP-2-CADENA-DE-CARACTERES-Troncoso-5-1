/*9. Realizar un programa en el cual el usuario primero ingrese una oraci�n
la cual puede estar en may�scula o min�scula o de manera alternada
y luego pueda seleccionar que realice las siguientes acciones
a) Mostrar la oraci�n toda en may�scula
b) Mostrar la oraci�n todo en min�sculas
c) Mostrar la oraci�n alternando una may�scula y una min�scula
D) Mostrar la oraci�n comenzando todas las palabras con may�scula

Troncoso Fernando G 5�1�
*/


#include <stdio.h>
#include <string.h>

int main(){
	
	char oracion[200];
	
	printf("Ingrese una oracion\n");
	
	fgets(oracion, sizeof(oracion), stdin);
	
	int longi = strlen(oracion);
	
	printf("\n\n1-Mostrar la oracion en MAYUSCULA\t\t\t\t");
	
	printf("2-Mostrar la oracion en minuscula\n\n\n");
	
	printf("3-Mostrar la oracion alternando una MAYUSCULA y una minuscula\t");
	
	printf("4-Mostrar la oracion comenzando todas las palabras MAYUSCULA\n\n\n");
	
	
	printf("Elija algunas de las opciones\n\n\n");
	
	int op;
	
	scanf("%d", &op);
	
	if(op>4||op<1){
		do
		{
	printf("Error, opcion no valida\n"); 
	printf("ingrese nuevamente la opcion deseada: \n");
	scanf("%d",&op);
		}while(op>4||op<1);
	}
	
	switch(op){
		
		case 1:
			
			strupr(oracion);
			printf("%s", oracion);
			
		break;
		
		case 2:
			
			strlwr(oracion);
			printf("%s", oracion);
			
		break;
		
		case 3:
			
			for(int i=0;i<longi;i++){
				
				if(i%2==0){
					strupr(oracion);
					printf("%c", oracion[i]);
				}
				if(i%2!=0){
					strlwr(oracion);
					printf("%c", oracion[i]);
					
				}
			}
			
		break;
		
		case 4:
			
			for(int i=0;i<longi;i++){
				
			if(i==0){
				strupr(oracion);
				}	
			printf("%c", oracion[i]);
				strlwr(oracion);
			if(oracion[i]==' '||oracion[i]=='\n'){
				strupr(oracion);
				}
			
			}
		break;
		
}
return 0;
}
