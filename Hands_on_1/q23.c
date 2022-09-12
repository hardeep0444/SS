//HARDEEP SINGH ARORA
//MT2022047

#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
#include<unistd.h>

void main()
{
	pid_t check = fork();
	
	if(check>0)
	{
		printf("Parent process id = %d\n",getpid());
		sleep(20);
	}
	else
	{
		printf("child process id = %d\n",getpid());
	}
}
