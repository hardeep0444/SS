#include<unistd.h>
#include<sys/types.h>

int main()
{
	int fd[2];
	pipe(fd);
	
	pid_t p = fork();
	
	if(p!=0)
	{	//child process
		char *path = "/bin/ls";
		char *arg = "-l";
		dup2(fd[1],1); //so that 1 becomes fd[1]
		close(fd[0]);
		execl(path,path,arg,NULL);
	}
	else
	{	//parent process
		char *path = "/bin/wc";
		dup2(fd[0],0); //so that 0 becomes fd[0]
		close(fd[1]); //or else execl will give output to "fd[1]"(because 1 is fd[1]" that is pipe write end but we want it to give output to stdout so that we can see the output on the terminal
		execl(path,path,NULL);
	}
}
