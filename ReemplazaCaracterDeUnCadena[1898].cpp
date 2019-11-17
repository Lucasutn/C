#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char palabra[20],letra,nuevaletra; 
	
	printf("Ingrese la palabra ");
	scanf ("%s",palabra);
	getchar();
	
	printf("Ingrese la letra que quiere reemplazar ");
	scanf ("%c",&letra);
	getchar();
	
	printf("Ingrese la letra por la que va a reemplazarla ");
	scanf ("%c",&nuevaletra);
	
	
	
	for(int I=0;I<25;I++)
	{
		if(palabra[I]==letra)
		{
			palabra[I]=nuevaletra;
		}
		
	}
	
	
	printf("La nueva palabra es %s",palabra);
	
	getch();
	return 0;
}
