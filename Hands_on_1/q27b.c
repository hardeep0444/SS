//HARDEEP SINGH ARORA
//MT2022047

#include<unistd.h>

int main()
{
	char *file_name = "ls";
	char *arg1 = "-a";
	
	execlp(file_name,file_name,arg1,NULL);
}
