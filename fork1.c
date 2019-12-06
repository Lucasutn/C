#include <stdio.h>

int main() {
	int pid;
	int i;
	int estado;
 
	pid = fork();
 	//system("ls");
	switch(pid)
	{
		case -1: // Si pid es -1 quiere decir que ha habido un error
			perror("No se ha podido crear el proceso hijo\n");
			break;
		case 0: // Cuando pid es cero quiere decir que es el proceso hijo
			for(i=0; i<10; i++)
				{
				sleep (3);	
				printf("Soy el primer hijo (%d, hijo de %d)\n",  getpid(), getppid());
					}		
			break;
		default: // Cuando es distinto de cero es el padre
			sleep(10);			
			for(i=0; i<10; i++)
				printf("Soy el padre\n");
			
			printf("TERMINE NO ESPERO A NADIE. \n");
			// La función wait detiene el proceso padre y se queda esperando hasta
			// que termine el hijo			
			wait(estado);
			//printf("Mi proceso hijo ya ha terminado.\n");
			break;
	}
 
}




