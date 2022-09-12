//HARDEEP SINGH ARORA
//MT2022047

#include<unistd.h>
#include<stdio.h>
int main()
{
	int fd = creat("q3.txt",0744);
	printf("Filedescriptor = %d",fd);
	return 0;
}
