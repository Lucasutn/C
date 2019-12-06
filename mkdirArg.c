#include<stdio.h>

int main()
{
	char comando[30] = "mkdir ";
	char dir[30];//Definimos un char de 30 elementos
	printf("Ingresa el directorio a crear :"); //Le pedimos al usuario que ingrese el comando a ejecutar
	scanf("%s", dir); //Esperamos a que sea ingresado y lo asignamos al char
	
	sprintf(comando, "%s%s", comando, dir);	
	system(comando); //Ejecutamos lo ingresado por el usuario en la consola
	
return 0;//Devolvemos 0
}
