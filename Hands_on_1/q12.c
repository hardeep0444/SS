//HARDEEP SINGH ARORA
//MT2022047

#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
void main (){
	//numeric value of O_RDWR

	int fd = open("file1", 32770);
	if(fd<0){
		printf("Unable to open file\n");
		return;
	}

	int fileMode = fcntl(fd, F_GETFL);
	printf("File Mode: %d\n",fileMode ); 
}
