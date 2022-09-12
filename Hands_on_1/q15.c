//HARDEEP SINGH ARORA
//MT2022047

#include<unistd.h>
#include<stdio.h>
extern char **environ; //extern variable defined in unistd

void main(){
	int i = 0;
	while(environ[i]) {
		printf("%s\n", environ[i++]);
	}
}
