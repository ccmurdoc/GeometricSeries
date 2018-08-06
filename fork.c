#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>
#include <stdlib.h>

//Geometric Series Function
int geomet(int lower, int constant, int upper)
{
	if(upper>=lower)
	{
			int i;
			for( i =0; i < upper; i++)
			{
				int sum =0;
				sum = sum + lower;
				lower = lower * constant;
				printf("%d ",sum);
			}		
	}
	else
	{
			printf("Your upper bound cannot be less than the lower bound.\n");
	}	
}
int main()
{
	pid_t pid;
	pid = fork();
	//Checking to see if busy
	if (pid < 0) {
        printf("Child Creation Failed\n");
        exit(0);
    }
	//If not then proceed to execute function
    else if (pid == 0)
	{
	int de,i,a,b,c /*a =2, b = 3, c = 6*/;
	printf("Input lower bound\n");
	scanf ("%d", &a);
	printf("Input constant\n");
	scanf ("%d", &b);
	printf("Input upper bound\n");
	scanf ("%d", &c);
	de = geomet(a,b,c);
	}
	    // parent process
    else {
        wait(NULL);
        // waiting for child process to end
        printf("Done\n");
    }
	exit(0);
}
