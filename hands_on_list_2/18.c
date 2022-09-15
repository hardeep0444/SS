#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{
	
	int fd2[2];
	pipe(fd2);
	
	if(!fork())
	{ //child (C1) of main parent(P)
		int fd[2];
		pipe(fd);
		
		if(!fork())
		{ //child (C2) of child(C1)
			dup2(fd[1],1);
			close(fd[0]);
			execl("/bin/ls","ls","-l",NULL);
		}
		else	
		{
			//parent of C2 i.e, C1
			wait(0);
			dup2(fd[0],0);
			close(fd[1]);
			dup2(fd2[1],1);
			close(fd2[0]);
			execl("/bin/grep","grep","^d",NULL);
		}	
	}	
	else
	{ //this is the main parent	(P)
			wait(0);
			dup2(fd2[0],0);
			close(fd2[1]);
			execl("/bin/wc","wc",NULL);
	}
}
