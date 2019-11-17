/*
Ejercicio N°1: Ingresar una cadena por teclado. Se pide
"Que lea una cadena y la muestre al revés.
"Que lea una cadena y muestre las vocales e indique cuantas vocales hay.
"Ingresar por teclado un carácter e indicar cuantas veces aparece y en que posición
"Indicar cuantas veces aparece la siguiente secuencia de caracteres: "ca"
"Indicar si la cadena es un palíndromo.
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char cadena1[50],car;
	int n,longitud,j,cont2;
	cont2=0;
	j=0;
	int contCar=0;
	int a, e,i,o,u;
	a = e = i = o = u = 0;
	printf("ingrese una palabra\n");
	scanf("%s",&cadena1);
	printf("\n");
	//escribe la cadena ingresada al reves
	longitud=strlen(cadena1);	
	
	for(n=longitud-1;n>=0;n--){
		printf("%c",cadena1[n]);
	}
	
	printf("\n");
	//cuenta vocales de la cadena ingresada
	for(n=0; n<cadena1[n]; n++)
	{
		if(cadena1[n]== 'a' || cadena1[n]== 'A')
			a++;
		else if (cadena1[n]== 'e' || cadena1[n]== 'E')
			e++;
			else if (cadena1[n]== 'i' || cadena1[n]== 'I')
				i++;
			else if (cadena1[n]== 'o' || cadena1[n]== 'O')
			o++;
		else if (cadena1[n]== 'u' || cadena1[n]== 'U')
			u++;
	}
	
	printf("\nvocales que contiene la palabra\n");
	printf("a ... %d\n",a);
	printf("e ... %d\n",e);
	printf("i ... %d\n",i);
	printf("o ... %d\n",o);
	printf("u ... %d\n",u);
	
	//Se ingresa un carácter y cuento las veces aparece y en que posición
	printf("Ingrese un caracter para verificar si esta en la plabra ingresada\n");
	scanf("\n%c",&car);
	printf("Caracter ingresado %c\n",car);
	
	for(n=0 ;n<=longitud;n++){
		if(car == cadena1[n]){
			contCar ++;
			printf("\n esta en posicion: %d",n);
		}
		//else if (car != cadena1[n])
			//{printf("\nEl caracter no esta en la cadena\n");
		//break;
			//}
	}
	printf("\n\nEl caracter aparece %d veces",contCar);
	
	
	for(n=0;n<=longitud;n++){
		if(cadena1[n]== 'c'){
			if(cadena1[n+1]== 'a'){
				cont2++;
			}
		}
	}
	
	printf("\n\nla ocurrencia 'CA'aparece %d veces",cont2);
	getch();
	return 0;
}
