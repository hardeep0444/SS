#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>

int main()
{
	int fd[2];
	char buffer[100];
	
	pipe(fd);
	pid_t p = fork();
	
	if(p<0)
		printf("Unsuccessful fork\n");
	else if(p>0)
	{
		printf("Passing data to the child process\n");
		write(fd[1],"This has come from parent process\n",34);
	}
	else
	{
		printf("Child received data from parent\n");
		int n = read(fd[0],buffer,100);
		write(1,buffer,n);
	}
}
		
		
		
		
		
		
		
		

