//HARDEEP SINGH ARORA
//MT2022047

#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
void main(){
	int fd = open("file2", O_RDWR);
	if(fd<0){
		printf("Unable to open file\n");
		return;
	}
	char buf[10];
	printf("Enter first 10 bytes of data");
	scanf("%s",buf);

	write(fd, buf, 10);

	int value = lseek(fd, 10, SEEK_CUR);
	printf("Return Value : %d\n", value);
	printf("Enter next 10 bytes data");
	scanf("%s",buf);
	write(fd, buf, 10);

	close(fd);
}
