#include <stdio.h>
#define DIM 6

/* 
   Parent process creates a child and prints its pid 
   Child modifies variable x but the change should not be visible in 
   parent's code 
   Parent computes the products and child computes the sums  
*/

int x=0 ;

int main()
{ int pid, i, ans;
  int arr[DIM]={1,2,3,4,5,6};

  printf("Hello! I am the Parent executing now !\n");
      pid = fork();
      if ( pid == 0 )  /* child code begins */
      {   x=777;
          printf("Child: printing x = %d\n", x); 
          printf("Child: printing its PID = %d\n", getpid()); 
          printf("Child: printing its parent's PID = %d\n", getppid()); 

          ans = 0;
          for (i = 0 ; i < DIM ; i++)
          {   ans = ans + arr[i];
              printf("Child: sum = %d\n", ans); 
              if(lrand48()%2 == 1) sleep(50);
          }
          printf("Child: EXITING .....\n"); 
          _exit(0);
      }                /* child code end   */
      if ( pid < 0 )
      {   fprintf(stderr, "fork failed\n");
          exit(1);
      }
   
      if ( pid > 0 )  /* PARENT CODE */
      { 
        printf("Parent: child's pid = %d \n", pid);
        printf("Parent: printing its PID = %d\n", getpid()); 

        ans = 1;
	for (i = 0 ; i < DIM ; i++)
	{   ans = ans * arr[i];
	    printf("Parent: product = %d\n", ans); 
	    if( (lrand48()+1)%2 == 1) sleep(30);
	}

	printf("Parent: printing x (is it the same or different?) = %d\n", x);
        sleep(20);

      }

}
