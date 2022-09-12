//HARDEEP SINGH ARORA
//MT2022047

#include<unistd.h>

int main()
{
	char *path = "/bin/ls";
	char *arg1 = "-a";
	char *arg2 = "-s";
	execl(path,"",arg1,arg2,NULL);
	return 0;
}
