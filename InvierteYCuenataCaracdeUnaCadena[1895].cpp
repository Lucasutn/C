//Escribir un programa que inicialice arreglo de caracteres con una 
//cadena cualquiera y la imprima en orden inverso.*/
#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
	
	char cadena[50];
	int i;
	int largo;
	printf("ingrese la cadena\n");
	scanf("%s",&cadena);
	largo=strlen(cadena);
	printf ("\nLa cadena original es: ''%s'' y contiene %i caracteres\n",cadena,largo);
	printf ("\nPresione una tecla para ver la cadena en orden inverso.\n");
	getch();
	
	for (i=largo-1;i>=0;i--)
		printf ("%c",cadena[i]);
	getch();
}
