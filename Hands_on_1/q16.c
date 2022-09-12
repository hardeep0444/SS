//HARDEEP SINGH ARORA
//MT2022047

#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>

int main(){
	int fd = open("ticket_database", O_RDWR);
	struct flock lckdb;
		lckdb.l_type = F_WRLCK;
		lckdb.l_whence = SEEK_SET;
		lckdb.l_start = 0;
		lckdb.l_len = 0;
		lckdb.l_pid = 0;
	int retval = fcntl(fd, F_SETLK, &lckdb);
	
	printf("%d\n", retval);
	perror("Locking File: ");

	getchar(); 

	lckdb.l_type = F_UNLCK; //to UNLOCK
	retval = fcntl(fd, F_SETLK, &lckdb);
	printf("%d\n", retval);
	perror("Unlocking File: ");

	close(fd);
}
