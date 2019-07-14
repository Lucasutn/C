#include <stdio.h>

int main() {
	
	FILE* arch;
	char nombre;
	char punto;
	
	arch=fopen("NOMBRES.txt","r+b");
	
	fread(&nombre,sizeof(char),1,arch);
	
	while(!feof(arch)){
		
		if(nombre=='.'){
			printf("\n");
			
		}
		else{
			printf("%c",nombre);
			
			}
		
		fread(&nombre,sizeof(char),1,arch);
	}
	
	fclose(arch);
	
	return 0;
}

