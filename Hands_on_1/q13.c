//HARDEEP SINGH ARORA
//MT2022047

#include <stdio.h>
#include <stdlib.h>
#include <sys/select.h>

int main(void)
{
   fd_set set_of_fds;
   
   struct timeval tv;
   int retval;

   FD_ZERO(&set_of_fds); // Clears the set of fds
   FD_SET(0, &set_of_fds); //Add fd(0) "STDIN" to the set

   tv.tv_sec = 10; // Wait 10s
   tv.tv_usec = 0;

   retval = select(1, &set_of_fds, NULL, NULL, &tv); //select call to wait for 10s

   if (retval == -1)
       perror("select()");
   else if (retval)
       printf("Data is available now.\n");
   else
       printf("No data within ten seconds.\n");

   exit(EXIT_SUCCESS);
}
