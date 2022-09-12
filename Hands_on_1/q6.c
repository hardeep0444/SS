//HARDEEP SINGH ARORA
//MT2022047

#include<unistd.h>
#include<fcntl.h>
void main(){
	char ch[20];
	read(0, ch, 5);
	write(1,ch, 5);
}

