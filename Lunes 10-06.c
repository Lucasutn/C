#include <stdio.h>
#include <string.h>

int main() {
	;
	char cadena_palabra[]="ana.cadena.formada.por.palabras.";
	
	
	int longitud_arreglo=strlen(cadena_palabra);
	
	for(int i=0;i<longitud_arreglo;i++){
		
		if(cadena_palabra[i]=='.'){
			printf("\n");
		}
		else
		   {
			printf("%c",cadena_palabra[i]);
		}
	}
	
	
	//Palabras con A inicio y final
	
	
	int aFinal=0;
	int aInicial=0;
	
	for(int i=0;i<longitud_arreglo;i++){
		
	
			
			if(cadena_palabra[i]=='.'){
				
				if(cadena_palabra[i-1]=='a'|| cadena_palabra[i-1]=='A'){
					
					aFinal++;
					
				}
				else if(cadena_palabra[i+1]=='a' || cadena_palabra[i+1]=='A'){
					
					aInicial++;
					
				}
				
				
				
			}
			
		
		
		
	}
	
	char palabraA[]="a";
	
	if(strchcr(cadena_palabra,palabraA)=='a'){
		
		aInicial++;
	}
	
	printf("\nCon A inicial %d\n",aInicial);
	printf("Con A Final %d\n",aFinal);
	
	
	
	

	
	return 0;
}

