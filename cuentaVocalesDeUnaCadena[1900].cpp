
#include <stdio.h>
#include <string.h>
#include <conio.h>
	int main(void)
	{
		char cadena[100];
		int a, e, i, o, u, cont;
		printf("Ingrese una cadena de texto\n");
		scanf("%s",&cadena);
		a = e = i = o = u = 0;
		for(cont=0;cont< cadena[cont];cont++)
		{
			if(cadena[cont] == 'a') a++;
			else if(cadena[cont] == 'e') e++;
			else if(cadena[cont] == 'i') i++;
			else if(cadena[cont] == 'o') o++;
			else if(cadena[cont] == 'u') u++;
		}
		printf("La cadena ingresada es\n");
		printf("%s\n",cadena);
		printf("vocales\n");
		printf("a ... %hd\n",a);
		printf("e ... %hd\n",e);
		printf("i ... %hd\n",i);
		printf("o ... %hd\n",o);
		printf("u ... %hd\n",u);
		
		
		getch ();
		return 0;
	}
