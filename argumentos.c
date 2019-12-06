#include <stdio.h>
#include<stdlib.h>
 int main (int argc, char *argv[]) {


//El %d significa que es un número.
//El argc indica el número de argumentos pasados desde el sistema operativo, se le resta uno porque el primer argumento es el nombre del programa
printf("Número de argumentos pasados %d\n", argc-1);

printf("Nombre Archivo ejecutable. Argumento 0: %s\n", argv[0]);

//El %s significa que es un string, el argv[1] representa el primer argumento pasado al programa desde el sistema operativo
printf("Argumento 1: %s\n", argv[1]);
//De por si los argumentos pasados son string, si queremos mostrar un argumento que sea número, primero debemos convertirlo
//El atoi convierte una cadena a número entero, se puede utilizar otras funciones como atof.
printf("Argumento 2: %d\n", atoi(argv[2]));

printf("Argumento 2: %s\n", argv[2]);

//Declaramos nombre como char
char *nombre;
//Declaramos edad como tipo entero
int edad;
 
//Mostrar texto para ingresar nombre
printf("Ingrese nombre: ");
//Capturar lo que el usuario escribe, el %s significa string, lo que se ingrese se guarda en nombre
scanf("%s", &nombre);
//Mostrar texto para ingresar edad
printf("Ingrese edad: ");
//Capturar lo que el usuario escribe, el %d significa que se ingresará un número, lo que se ingrese se guarda en edad
scanf("%d", &edad);
//Mostramos los datos ingresados.
//El símbolo & se utiliza siempre en varibles usadas con punteros, como pueden ser char, arreglos,etc para poder acceder directamente a su contenido y no a su dirección de memoria.
printf("\n Nombre %s \nEdad: %d\n",&nombre, edad);
 


 return 0;
 }
