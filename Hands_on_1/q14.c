//HARDEEP SINGH ARORA
//MT2022047

#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<unistd.h>

int main(int argc, char** filepath)
{
	struct stat sb;
	int retval =  stat(filepath[1], &sb);
	
	if(retval==-1){
		perror("Error: ");
		return 0;
	}
	
	printf("%s\n", filepath[1]);
	printf("File type:	");

	switch (sb.st_mode & S_IFMT) {
		case S_IFBLK:  printf("block device\n");            break;
		case S_IFCHR:  printf("character device\n");        break;
		case S_IFDIR:  printf("directory\n");               break;
		case S_IFIFO:  printf("FIFO/pipe\n");               break;
		case S_IFLNK:  printf("symlink\n");                 break;
		case S_IFREG:  printf("regular file\n");            break;
		case S_IFSOCK: printf("socket\n");                  break;
		default:       printf("unknown?\n");                break;
	}

	return 0;
}
