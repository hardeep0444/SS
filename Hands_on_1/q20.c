//HARDEEP SINGH ARORA
//MT2022047

#include<stdio.h>
#include<unistd.h>

int main(){

    int currNiceValue = nice(0);
    printf("nice value of current process is: %d\n", currNiceValue);

    nice(12);

    currNiceValue = nice(0);
    printf("nice value after modification is: %d\n", currNiceValue);
	
	getchar();
    return 0;
}
