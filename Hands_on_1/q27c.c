//HARDEEP SINGH ARORA
//MT2022047

#include <unistd.h>
 
int main(void) {
  char *binaryPath = "/bin/bash";
  char *arg1 = "-c";
  char *arg2 = "echo \"Visit $HOSTNAME:$PORT from any browser.\"";
  char *const env[] = {"HOSTNAME=www.iiitb.ac.in/hardeep", "PORT=8080", NULL};
 
  execle(binaryPath, binaryPath,arg1, arg2, NULL, env);
 
  return 0;
}
