/* fork.c - fork a child process */
#include <stdio.h>


void main()
{
   int fork_return;
   int count = 0;
   /* getpid() returns the process id of this process. */
   printf("Process %d about to fork a child.\n", getpid() );
   fork_return = fork();
   if( fork_return < 0)
   {
      printf("Unable to create child process, exiting.\n");
      exit(-1);
   }
   /* BOTH processes will do this! */
   system("ps");
   if( fork_return > 0)
   /* Then fork_return is the pid of the child process and I am
      the parent. Start printing a's. */
   {
      printf("Created child process %d.\n", fork_return);
      while( count++ < 800)
      {
    	   putchar('a');
	   if(count % 80 == 0){
		putchar('\n');
		sleep(2);
	   }
	}
   }
   else
   /* A 0 return tells me that I am the child. Print b's */ 
   {
      while(count++ < 800)
      {
         putchar('b');
	   if(count % 80 == 0){
		putchar('\n');
	        sleep(2);
	   }
	}
    }
}
