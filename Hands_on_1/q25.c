//HARDEEP SINGH ARORA
//MT2022047

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
void main(){
	printf("Process id = %d\n",getpid());
	
	pid_t a = fork();
	pid_t b,c;
	if(a){
		b = fork();
		if(b){
			c = fork();
			if(c){
				//printf("Waiting for third child\n");
				waitpid(c);
				printf("Parent Dies: %d \n",getpid());
				}
			else
			{

				sleep(10);
				printf("third Child dies %d\n",getpid());
			}
		}
		else{
			printf("Second Child dies %d\n",getpid());
		}

	}
	else{
		printf("First Child dies %d\n",getpid());
	}
	
}
