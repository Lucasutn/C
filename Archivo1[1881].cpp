#include <stdio.h>

int main(){
	
	printf("\nBienvenidos al Escritor\n");
	
	FILE* miarchivo= NULL;
	char* nombrearchivo = "Data2.txt";
	
	miarchivo= fopen(nombrearchivo, "w" );
	if(miarchivo == NULL)return-1;
	
	fprintf(miarchivo, "Hola soy un archivo2! \n");
	
	
	fclose(miarchivo);
	return 0;
}
