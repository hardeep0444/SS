#include<unistd.h>

int main()
{
	int fd[2];
	pipe(fd);
	
	char buffer[100];
	
	write(fd[1],"Hardeep\n",8);
	
	int n = read(fd[0],buffer,100);
	
	write(1,buffer,n);
}
	
	
	
