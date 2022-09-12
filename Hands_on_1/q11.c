//HARDEEP SINGH ARORA
//MT2022047

#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
void main (){
	
	int fd = open("file1", O_RDWR);
	if(fd<0){
		printf("Unable to open file\n");
		return;
	}

	char buf[10];

	printf("Enter data to append with original fd(%d) ",fd);
	scanf("%s",buf);
	lseek(fd, 0, SEEK_END);

	write(fd, buf, sizeof(buf));

	// 11.a
	int dup_fd;

	printf("Enter data to append with dup(%d) ",dup_fd);
	scanf("%s",buf);

	dup_fd = dup(fd);
	write(dup_fd, buf, sizeof(buf));

	// 11.b

	int dup_fd2 =9;
	printf("Enter data to append with dup2(%d) ",dup_fd2);
	scanf("%s",buf);

	dup2(fd,dup_fd2);
	write(dup_fd2, buf, sizeof(buf));

	//11.c
	int dup_fd3;
	printf("Enter data to append with fcntl(%d) ",dup_fd3);
	scanf("%s",buf);

	dup_fd3 = fcntl(fd, F_DUPFD);
	write(dup_fd2, buf, sizeof(buf));
	
	
	close(fd);

}
