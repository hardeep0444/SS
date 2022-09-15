//HARDEEP SINGH ARORA
//MT2022047


#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
void main()
{
	link("source","hardlinkthroughsystemcall");
	symlink("source","softlinkthroughsystemcall");
	mkfifo("mypipethroughsystemcall",0744);
}
