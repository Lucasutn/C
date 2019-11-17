/*Leer 2 cad desde teclado,concatenarlas y mostrar la concatenación por pantalla.Por eje,*/
/*el resultado de concatenar las cadenas "hola" y ", y adiós" sería: "hola, y adiós".*/
/*Hacer un programa que use la función y otro progr que no use la función.*/
#include <stdio.h>
#include <string.h>
int main()
{
	char cadena1[7];
	char cadena2[7];
	char destino[14];
	printf("ingrese la primer cadena\n");
	gets(cadena1);
	printf("Ingrese la segunda cadena\n");
	gets(cadena2);
	strcpy(destino,cadena1);
	strcat(destino,cadena2);
	printf("%s",destino);
	getchar();
	return 0;
}
