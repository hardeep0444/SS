//HARDEEP SINGH ARORA
//MT2022047

#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
void main (){
	char a[20];
	char b[20];
	printf("Enter filename 1 to read from:");
	scanf("%s", a);
	printf("Enter filename 2 to write to:");
	scanf("%s", b);

	char buffer[1024];
	
	int input_fd = open(a, O_RDONLY);
	int output_fd = open(b, O_WRONLY);

	char ch;
	int i_bytes = read(input_fd, &buffer, sizeof(buffer));
	
	write(output_fd, &buffer, i_bytes);
	
	close(input_fd);
	close(output_fd);


}

