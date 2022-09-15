//HARDEEP SINGH ARORA
//MT2022047

#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
int main()
{
	int fd = creat("q3.txt",0744);
	printf("Filedescriptor = %d\n",fd);
	return 0;
}
