#include <stdio.h>
#define num 3

struct Alumnos{
	
	char nombre[30];
	char apellido[30];
	int dni;
	int nota;
	
	
};


int main() {
	
	
	struct Alumnos alumnos[num];
	
	
	for(int i=0;i<num;i++)
	{
		printf("Ingrese datos Alumnos: %d\n",i+1);
		printf("\nIngrese El Nombre\n");
		scanf("%s",&alumnos[i].nombre);
		printf("Ingrese el apellido\n");
		scanf("%s",&alumnos[i].apellido);
		printf("Ingrese el DNI\n");
		scanf("%d",&alumnos[i].dni);
		printf("\n");
		printf("Ingrese nota: ");
		scanf("%d",alumnos[i].nota);
	}
	
	for(int i=0;i<num;i++)
	{
		printf("DNI= %d\n",alumnos[i].dni);
		printf("Nombre= %s\n",alumnos[i].nombre);
		printf("Apellido= %s\n",alumnos[i].apellido);
		promedio("Promedio %d",alumnos[i].nota);
	}
	
	int cantAlumnos=0;
	int cantAlumnosMin=0;
	int Apromedio=0;
	int Bpromedio=0;
	
	
	for(int i=0;i<num;i++)
	{
		if(alumnos[i].nota>=7){
		cantAlumnos++;	
		Apromedio=alumnos[i].nota;
		Bpromedio=Apromedio+Bpromedio;
		
		}
		else{
			cantAlumnosMin++;
			
		}
	}
	
	int promediodeAlumnos7= (num/cantAlumnos)*100;
	int promediodeAlumnosMenos7=(num/cantAlumnosMin)*100;
	
	printf("Porcentaje 7 mas %d",promediodeAlumnos7);
	printf("Porcentaje menor 7 : %d",promediodeAlumnosMenos7);
	
	printf("Total de alumnos: %d",num);
	
	printf("Promedio general  de alumnos\n );
	
	
	
	return 0;
}

