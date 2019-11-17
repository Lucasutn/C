#include <stdio.h>
#include <conio.h>
#include <string.h>
int main ()
{
	FILE *parch;
	char texto[ ]="Prueba.de.escritura";
	int cant , longi,i;
	if((parch=fopen("prueba.txt","w"))==NULL)//Seabreenmodoescritura
		printf("\nEl archivo no puede ser abierto");
	longi=strlen (texto );
	if(longi=='.')
	puts("\n");
	cant=fwrite( texto , sizeof ( char ) , longi , parch );//Se escribe al archivo
	
		
	if (cant<longi)
		printf("\nError al escribir el archivo");
	else
		printf("\nSe escribieron %d caracteres", cant);
	fclose(parch);
	
	getch();
	return 0;
}
