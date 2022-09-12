//HARDEEP SINGH ARORA
//MT2022047


#include<stdio.h>
void main()
{
	link("source","hardlinkthroughsystemcall");
	symlink("source","softlinkthroughsystemcall");
	mkfifo("mypipethroughsystemcall",0744);
}
