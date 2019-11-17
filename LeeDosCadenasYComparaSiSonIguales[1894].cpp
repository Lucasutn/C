/*Dadas 2 cad cad1 y cad2.Verificar si el contenido de ambas es =.Mostrar el contenido de*/
/* ambas cadenas*/
#include <stdio.h> 
#include <conio.h>
#include <string.h>
int main()
{
	char cad1[10];
	char cad2[10];
	int aux1=0;
	int aux2=0;
	printf ("Ingrese la cadena1:\n");
	scanf("%s",&cad1);
	printf("Ingrese la cadena2:\n");
	scanf("%s",&cad2);
	aux1=strlen(cad1);
	aux2=strlen(cad2);
	if (aux1 ==aux2){
		printf ("Las cadenas son iguales\n");}
	else if(aux1>aux2){
		printf("La cadena1 es mayor que la cadena2\n");}
	else {printf ("La cadena1 es menor que la cadena2\n");}
	printf("%s",cad1);
	printf("  ");
	printf("%s",cad2);
	getch();
	return 0;
}
