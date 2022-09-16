//HARDEEP SINGH ARORA
//MT2022047

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

void main()
{
	int fd;
	char child_msg[50] = "This text is written by child process\n";
	char parent_msg[50] = "This text is written by parent process\n";
	char ch, cha;
	
	fd = open("fileforfork", O_RDWR);
	
	pid_t call_fork = fork();
	
	
	
	if(fd!=-1)
	{
		if(call_fork<0)
		{
			printf("Unsuccessful fork call\n");
		}
		else if(call_fork==0)
		{
			printf("**********CHILD PROCESS is running***********\n");
			printf("Child process id = %d\n",getpid());
			write(fd,child_msg,sizeof(child_msg));	
			lseek(fd,0,SEEK_SET);
			while(read(fd,&ch,sizeof(ch)))
				printf("%c",ch);
			//read(fd,buffer,sizeof(buffer));		
			sleep(10);
		}
		else
		{
			wait(0);
			printf("**********PARENT PROCESS is running***********\n");
			printf("Parent process id = %d\n",getpid());
			write(fd,parent_msg,sizeof(parent_msg));
			lseek(fd,0,SEEK_SET);
			while(read(fd,&ch,1))
			printf("%c",ch);			
			sleep(10);
		}
		//read(fd,buffer,sizeof(buffer));
		close(fd);
	}
	else
	{
		printf("Unable to open the file\n");
	}
	
}
