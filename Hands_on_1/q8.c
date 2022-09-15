//HARDEEP SINGH ARORA
//MT2022047

#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
void main (){
	char a[20];
	char b[20];
	printf("Enter filename to read from:");
	scanf("%s", a);

	
	int input_fd = open(a, O_RDONLY);

	char ch[1000],c;
	int i=0, n=0;
	
	if(input_fd)
	{	
		do{
			n=read(input_fd, &c,sizeof(c));
			ch[i++] = c;
			
			if(c=='\n')
			{
		     write(1,&ch,i*sizeof(char));
		     i=0;
		    }
		    
		  }while(n>0);
	}
	else{
		printf("Uable to open inputFile");
	}
	close(input_fd);
}

