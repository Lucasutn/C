#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char cadena[20]={'a','n','a','.','a','l','e','j','a','n','d','r','o'};
  // char a='a';
 char destino[20];
  int cantidad=strlen(cadena);
   strcpy(destino,cadena);
    printf("la cadena %s tiene %i caracteres\n",cadena,cantidad);
    printf("%s",cadena);
   
    cantidad=strlen(cadena);
   
   while(cantidad<20){
              strcpy(destino,"a");
            
   
              printf("%s",destino);
              
                      cantidad++;
                   
                    }
                   
                   
                      // printf("%s",destino);
          // printf("%s",strcat(cadena,destino));
                    
              
              
              
                                      
                 
                   
         
                    
                       getch();}
//strcpy( destino, textocurso );
