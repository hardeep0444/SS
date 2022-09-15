//HARDEEP SINGH ARORA
//MT2022047

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void main()
{
	int fd = open("test.txt",O_EXCL|O_CREAT|O_RDWR,0764);
	printf("Opened file: %d\n",fd);	
}

