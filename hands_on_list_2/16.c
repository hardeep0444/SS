#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int fd1[2];
	int fd2[2];
		
	pipe(fd1);
	pipe(fd2);
	
	pid_t p = fork();
	
	if(p<0)
		exit(0);
	else if(p==0)
	{	
		int y;
		read(fd1[0],&y,sizeof(y));
		printf("Received inside child : %d\n",y);
		y = y*10;
		write(fd2[1],&y,sizeof(y));
		printf("Written by child : %d\n",y);
	}
	else
	{
		int x = rand()%10;
		write(fd1[1],&x,sizeof(x));
		printf("Written by parent : %d\n",x);
		read(fd2[0],&x,sizeof(x));
		printf("Received inside parent : %d\n",x);
	}
}		
