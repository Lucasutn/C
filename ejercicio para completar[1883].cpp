

#include <stdio.h>
#include <conio.h>
#define ARCH "c:\\bin.dat"
#define ESC 27

struct a
	{
		char nombre[10];
		int edad;
	};
int main()
{
	
	FILE *bin;
	struct a pers;
	int n, cant;
	printf("\nSe va a generar por primera vez el archivo\n");
	
	if((bin=fopen(ARCH,"rb"))== NULL)
		printf("El archivo no puede ser abierto");
	do{
		printf("\nIngrese el nombre: ");
		scanf("%s",*&pers.nombre);
		
		printf("\nIngrese edad: ");
		scanf("%d",&pers.edad);
		
		fwrite(&pers,sizeof(pers),1,bin);
		
		printf("Presione 1 para terminar");
		scanf("%d",&n);
	}while(n!=1);
	
	
	while(!feof(bin))
	{
		cant=fread(&pers,sizeof(pers),1,bin);
		if(cant!=1)
		{
			if(feof(bin))
				break;
			else
				{
					printf("Error, no leyo el ultimo registro");
					break;
				}
		}
		printf("\n%s\t%d",pers.nombre,pers.edad);
	}
	fclose(bin);
		
		getch();
}
