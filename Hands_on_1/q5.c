//HARDEEP SINGH ARORA
//MT2022047

#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<sys/stat.h>
#include<unistd.h>
#include<sys/types.h>
	
void main(){
	int i=0;
	int fds[5];

	fds[0] = creat("q5file1", 0744);
	fds[1] = creat("q5file2", 0744);
	fds[2] = creat("q5file3", 0744);
	fds[3] = creat("q5file4", 0744);
	fds[4] = creat("q5file5", 0744);	
	printf("\nProcess ID : %d", getpid());

	printf("\nFile Descriptors:\n");
	for(int i=0;i<5;i++)
		printf("%d , ",fds[i]); 
	
	
	getchar();
	for(int i=0;i<5;i++)
		close(fds[i]);
	
}
