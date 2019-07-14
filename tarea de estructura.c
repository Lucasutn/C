#include <stdio.h>
struct Alumnos{
	int nrolegajo;
	char nombre;
	char apellido;
	float nota;

}alum[10];/*
int CantRegulares(){
	float nota1,nota2,nota3,notafinal;
	int a=0,b=0,c=0;
	notafinal=(nota1+nota2+nota3)/3;
	if((notafinal>=6)&&(notafinal<7)){
		return printf("Alumno regularizo");
		
	}else if(notafinal>=8){
		return printf("Alumno promociono");
		
	}else if(notafinal<6){
		return printf("Alumno quedó libre");
		
	}
}
int promedio(){//CORREGIR LOS PARAMETROS 
	float notafinal,promedio;
	promedio=(nota1+nota2+nota3)/3;
	return notafinal;
}*/
int main() {
	struct Alumnos alum[2];
	char rta;
	int cont=1,i,condicion=0,suma=0,cantAlumnos=0,cantReg=0 , cantProm=0, cantLibres=0,cont2=0;
	
	while(cont!=0 && condicion!=1){
		printf("Datos del alumno %d\n",cont2+1);
		printf("Ingrese numero de legajo: \n");
		scanf("%d",&alum[i].nrolegajo);
		printf("Ingrese nombre: \n");
		scanf("%s",&alum[i].nombre);
		printf("Ingrese apellido: \n");
		scanf("%s",&alum[i].apellido);
		printf("Ingrese nota 1: \n");
		scanf("%f",&alum[i].nota);
		suma +=alum[i].nota;
		cantAlumnos++;
		if(alum[i].nota>=6 && alum[i].nota<7){
			
			cantReg++;
			
			
		}if(alum[i].nota>=7 && alum[i].nota<=10){
			cantProm++;
			
			
		}else{
			
			cantLibres++;
			
		}
		printf("Seguir cargando datos de alumnos? (presiona s:si / n:no)\n");
		scanf("%c",&rta);
		if(rta=='s'){
			condicion=0;
			
		}else{
			
			condicion=1;
		}
	
	}
	printf("Cantidad de alumnos regulares %d\n",cantReg);
	printf("Cantidad de alumnos libres\n",cantLibres);
	printf("Cantidad de alumnos promocionados\n",cantProm);
	printf("\n");
	
	return 0;
}
