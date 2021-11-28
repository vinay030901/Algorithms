#include<unistd.h>
#include<stdio.h>
#include<sys/wait.h>
#include<sys/types.h>
int main()
{
    int fd[2],n,nbr,nbw;
    char arr[100],str[100];
    pipe(fd);
    pid_t p=fork();
    if(p==0)
        {
            printf("enter a string: ");
            gets(str);
            nbw=write(fd[1],str,strlen(str));
            printf("child wrote: %d bytes\n",nbw);
            exit(0);
        }
    else
    {
        nbr=read(fd[0],arr,100);
        arr[nbr]='\0';
        printf("parent read %d bytes: %s\n",nbr,arr);
    }
    return 0;
}