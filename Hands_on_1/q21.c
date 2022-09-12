//HARDEEP SINGH ARORA
//MT2022047


#include<stdio.h>
#include<unistd.h>

void main()
{
	pid_t check;
	printf("Process id = %d\n",getpid());
	
	check = fork();
	
	if(check<0)
	{
		printf("Unsuccessful fork call\n");
	}
	else if(check==0)
	{
		printf("***********Child Process*************\n");
		printf("Child process id = %d\n",getpid());
		sleep(10);
	}
	else
	{
		wait();
		printf("***********Parent Process************\n");
		printf("Parent process id = %d\n",getpid());
		sleep(15);
	}
}
