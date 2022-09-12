//HARDEEP SINGH ARORA
//MT2022047

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
void main(){
	
	int cpid = fork();
	printf("process pid = %d",getpid());
	//int fd = open("src", O_RDWR);
	if(cpid){
		printf("Child pid from parent: %d\n", cpid);
	}
	else{
		sleep(30);
		char buf1[] = "THIS IS CHILD"; //Orphan child
	}
}
