/*"Ingresar por teclado  un texto que contenga  oraciones y párrafos.
	Cada oración está separada por el carácter punto y cada párrafo está separado
	por el carácter asterisco.
 "Mostrar por pantalla cada párrafo separado por una línea en blanco. 
 "Indicar cuantas oraciones tiene cada párrafo, total de párrafos y total de oraciones.
 "Mostrar por pantalla la primera oración de cada párrafo indicando a que párrafo pertenece.
 "Indicar cuál es el párrafo que tiene más oraciones y mostrarlo por pantalla.
    Cada oraciones debe aparecer una debajo de la otra.
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	char oraci[2000]={"Ingresar.por teclado.un texto que contenga.oraciones y parrafos*Cada oracion esta.separada por el caracter punto*y cada parrafo. esta separado.por el caracter asterisco*"};
	int largo, i;
	int parr, ora;
	parr=ora=0;
	//printf("Ingrese una un oracion\n");
	//scanf("%s",&*oraci);
	//gets(oraci);
	printf("%s\n",oraci);
	largo=strlen(oraci);
	printf("\n");
	for(i=0; i<largo; i++){
		printf("%c",oraci[i]);
		if(oraci[i]== '*'){
			printf("\n\n");
			parr++;
			}		
	}
	for(i=0; i<largo; i++){
		if(oraci[i]=='.')
			ora++;
		
	}
	

	printf("\n\nEl texto tiene %d parrafos\n",parr);
	printf("El texto tiene %d oraciones\n",ora);
	
	
	getch();
	return 0;
}
