//HARDEEP SINGH ARORA
//MT2022047

#include<stdio.h>
#include<unistd.h>

int main()
{
	char *bin_path = "ls";
	char *args[]={bin_path,"-a",NULL};
	execvp(bin_path,args);
	return 0;
}
