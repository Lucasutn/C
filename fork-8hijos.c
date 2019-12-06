#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
int c, estado;
pid_t pid;

printf("Comienzo.:\n");
for (c = 0; c < 3 ; c++ )
 {
  pid = fork();
 }
	wait(estado);
  printf("<<Proceso>>\n>>");
  //printf("Soy el primer hijo (%d, hijo de %d)\n",  getpid(), getppid());
  return 0;
 }
