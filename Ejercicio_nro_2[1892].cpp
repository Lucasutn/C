/*"Ingresar por teclado  un texto que contenga  oraciones y p�rrafos.
	Cada oraci�n est� separada por el car�cter punto y cada p�rrafo est� separado
	por el car�cter asterisco.
 "Mostrar por pantalla cada p�rrafo separado por una l�nea en blanco. 
 "Indicar cuantas oraciones tiene cada p�rrafo, total de p�rrafos y total de oraciones.
 "Mostrar por pantalla la primera oraci�n de cada p�rrafo indicando a que p�rrafo pertenece.
 "Indicar cu�l es el p�rrafo que tiene m�s oraciones y mostrarlo por pantalla.
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
