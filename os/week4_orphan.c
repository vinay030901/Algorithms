#include <stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
    pid_t p;
    p=fork();
    if(p==0){
        sleep(5);
        printf("I am child having pid: %d\n",getpid());
        printf("my parent pid: %d\n",getppid());
    }
    else
    {
        printf("I am parent having pid: %d\n",getpid());
        printf("my child pid: %d\n",getpid());
    }
}