//Definir en etapa de declaracion un arreglo numerico de 10 elementos llamados A,
//generar un nuevo arreglo llamado B que contenga el duplo de los numeros pares de A.
//en caso de que no se localice num pares en A, mostrar un mensaje que indique tal situacion.
//en caso de que si mostrar el arreglo B y la cantidad de elementos del mismo
#include <conio.h>
#include <stdio.h>

int main(){
	int a[10], b[10];
	int i, cont=0;
	
	printf("Ingrese 10 valores numericos\n");
	for(i=0; i<10; i++){
		
		scanf(" %d",&a[i]);
		
	}
	
	printf("\nEl arreglo A tiene los elementos\n");
	for(i=0; i<10; i++){
		printf("[%d] %d\n",i+1, a[i]);
	}
	
	//printf("\nEl arreglo B tiene los duplos de los elemntos pares de A\n\n");
	for(i=0; i<10; i++){
		if(a[i]%2==0){
			b[i]=a[i]*a[i];
			//printf("[%d] %d\n",i+1, b[i]);
			cont++;
		}	
	}
	
	
	if(cont>=1){
		printf("\nEl arreglo B tiene los duplos de los elementos pares de A\n\n");
		for(i=0; i<10; i++){
			if(a[i]%2==0  ){
				b[i]=a[i]*a[i];
				printf("[%d] %d\n",i+1, b[i]);
			}
		
		}
		printf("se retipe %d veces",cont);
	 }	
	else
		printf("\nNo hay elementos pares en el Arreglo A\n");
	
	
	getch();
	return 0;
}
