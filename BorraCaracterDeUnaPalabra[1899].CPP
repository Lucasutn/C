#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char palabra[50],c;
	int i,j,k;
	//clrscr();
	printf("Ingrese Palabra: \n");
	scanf("%s",palabra);
	getchar();
	printf("Ingrese letra a borrar: \n");
	scanf("%c",&c);
	
	printf("Letra a buscar: %c \n",c);
	j=k=0;
	for(i=0;i<50;i++){
		if(palabra[i]==c){
			j++;
		}else{
			palabra[i-j]=palabra[i];
			k++;
		}
	}
	printf("%s",palabra);
	getch();
}
