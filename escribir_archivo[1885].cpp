#include <stdio.h>
#include <stdlib.h>    //lectura de un archivo
#include<conio.h>
 
int main()
{
	FILE *archivo;
	char cadena[50];
	int cant,i;
 //escribir
	archivo = fopen("irma.txt","w+");
 
	if (archivo == NULL){
 
		printf("\nError de apertura del archivo. \n\n");
        }else{
 
 
	    printf("ingrese texto\n");
	    gets(cadena);
		cant=fread(cadena,sizeof(cadena),1,archivo);
		fputs(cadena,archivo);
		if(cant=='.')
			printf()
	    
     }
     //leer
      	archivo = fopen("irma.txt","r");
 
	if (archivo == NULL){
 
		printf("\nError de apertura del archivo. \n\n");
        }else{
                 while (feof(archivo) == 0)
	    {
	//	caracter = fgetc(archivo);
	fgets(cadena,30,archivo);
		printf("%s",cadena);
	    }}
     fclose(archivo);
     getch();
     }
