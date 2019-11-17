/*
Ejercicio N° 3: Realizar el ejercicio usando las funciones 
"	Ingresar dos  cadenas llamadas C1 y C2.
"	Mostrar el contenido de C1 y C2.
"	Indicar cuál es la cadena más larga.
"	Comparar ambas cadenas
"	Concatenar una cadena a la cadena más corta.

*/

#include <conio.h>
#include <stdio.h>
#include <string.h>

int main(){
	char c1[100], c2[100];
	int cad1, cad2;
	cad1=cad2=0;
	printf("Ingrese la primera cadena\n");
	scanf("%s",&*c1);
	printf("\nIngrese la segunda cadena\n");
	scanf("%s",&*c2);
	
	//contamos los caracteres de cada cadena
	cad1=strlen(c1);
	cad2=strlen(c2);
	
	//comparo para ver igualdad
	if(cad1==cad2){
		printf("\nLas cadenas ingresadas tienen la misma longitud\n");
	}
	else if(cad1 > cad2){
		printf("\nLa primera cadena es mayor que la segunda\n");
	}
	else{
		printf("\nLa primera cadena es menor que la segunda\n");
	}
	
	//comparo si en ambas cadenas dice lo mismo
	if(strcmp(c1, c2)== 0){
		printf("\n\nEm ambas cadena dice la misma palabra\n");
	}
	else{
		printf("\n\n%s y %s no son iguales en contedido\n",c1,c2);
	}
	
	//concateno una cadena a la mas corta
	
	if(cad1 < cad2){
		strcat(c1,c2);
		printf("\n%s",c1);
	}
	else if(cad1 > cad2){
		strcat (c2,c1);
		printf("\n%s",c2);
	}
	
	getch();
	return 0;
	
}
