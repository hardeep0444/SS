#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>

int main()
{
	int fd[2];
	char buffer[100];
	pipe(fd);
	
	pid_t p = fork();
	
	if(p!=0)
	{	//child process
		char *path = "/bin/ls";
		char *arg = "-l";
		close(1);//to make 1 free  so that dup can make 1 as fd[1]
		fcntl(fd[1],F_DUPFD,0);//now 1 is fd[1]
		close(fd[0]);
		execl(path,path,arg,NULL);
	}
	else
	{	//parent process
		char *path = "/bin/wc";
		close(0);//to make 0 free  so that dup can make 0 as fd[0]
		fcntl(fd[0],F_DUPFD,0);//now 0 is fd[0]
		close(fd[1]); //or else execl will give output to "fd[1]"(because 1 is fd[1]" that is pipe write end but we want it to give output to stdout so that we can see the output on the terminal
		execl(path,path,NULL);
	}
}
