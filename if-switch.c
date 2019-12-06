//Llamada a librerías
#include<stdio.h>
#include<stdlib.h>
 
//Función principal
main(int argc, char **argv[])
{
 
//Declaramos variables
int nro1;
int nro2;
 
//Ingresamos dos números, rango inicial y final
printf("Ingrese numero 1: ");
scanf("%d", &nro1);
printf("Ingrese numero 2: ");
scanf("%d", &nro2);
 
//Preguntamos si el número 1 es menor al número 2
if(nro1<nro2)
{
 //Bucle While, que va desde el inicio hasta el fin, y lo muestra en pantalla
 while (nro1<=nro2)
 {
 printf("Numero: %d",nro1);
 nro1++;
 }
}
//Si el número 1 es mayor entonces mostramos en pantalla dicho mensaje
else
{
printf("EL NUMERO 2 DEBE SER MAYOR AL PRIMERO");
}
 
//Utilizaremos la variable nro1 para el ejemplo
 switch(nro1)
 {
 case 0: // Si es 0 entonces mostrar
 printf("La variable es 0");
 break;
 
 default: // Cuando es distinto de cero
 printf("La variable es distinto de 0");
 break;
 }
 
}