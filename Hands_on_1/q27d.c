//HARDEEP SINGH ARORA
//MT2022047

#include<stdio.h>

int main()
{
	char *bin_path = "/bin/ls";
	char *args[]={bin_path,"-a",NULL};
	execv(bin_path,args);
	return 0;
}
