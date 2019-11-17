/*Ingresar en una cadena de caracteres 10 nombres.Cada nombre está separado de otro por un*/
/*punto.Mostrar por pantalla los nombres ingresados uno debajo del otro.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char cad[50];
	int i,x;
	printf("Escriba 5 nombres separados un punto\n\n");
	scanf("%s",&cad);
	x=strlen(cad);
	for (i=0;i<x;i++)
	{
		printf("%c",cad[i]);
		if (cad[i]=='.')
			printf("\n");
	}
	getch();
	return 0;
	
}
