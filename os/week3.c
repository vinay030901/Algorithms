#include<stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
    pid_t p;
    p=fork();
    if(p==0){
        printf("this is the child process\n");
        exit(0); 
    }
    else{
        wait(&status);
        printf("this is the parent process");
    }
    return 0;
}