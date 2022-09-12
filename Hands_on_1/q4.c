//HARDEEP SINGH ARORA
//MT2022047

#include<stdio.h>
void main(){
	int fd = fopen("source", "O_RDWR");
	char ch;
	if(fd!=-1){
		do {
        		ch= fgetc(fd);
        		printf("%c", ch);
    		} while (ch != EOF);
 
    		fclose(fd);
	}
	else{
		printf("unable to open file");
	}
}

