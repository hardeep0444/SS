//HARDEEP SINGH ARORA
//MT2022047

#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
void main (){
	char a[20];
	char b[20];
	printf("Enter filename 1:");
	scanf("%s", a);
	printf("Enter filename 2:");
	scanf("%s", b);

	
	int input_fd = open(a, O_RDONLY);
	int output_fd = open(b, O_WRONLY);

	char ch;
	printf("outside while\n");
	if(input_fd){
		while( read(input_fd, &ch, sizeof(ch)) ){
			// printf("%c",ch);
			write(output_fd, &ch, sizeof(ch));
		}
	}
	else{
		printf("Uable to open inputFile");
	}
	close(input_fd);
	close(output_fd);


}

