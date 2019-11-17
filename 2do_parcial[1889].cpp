//ingresar una cadena de 10 caracteres por teclado.indicar cuantas veces 
//aparece la secuencia de caracteres "re"

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	
	char cad[10];
	int i;
	
	printf("Ingrese una cadena de 10 caracteres \n");
	scanf("%s",cad);
		int lon=strlen(cad);
	int cont=0;
	for(i=0;i<lon;i++){
		if(cad[i]=='r'){
			if(cad[i+1]=='e'){
				cont++;
			}
		}
			
	}
	printf("\nLa secuencia 're' aparece %d veces\n",cont);
	getch();
	
}
