#include <stdio.h>
#include<string.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
    int fd,nbw;
    char str[100];
    mknod("myfifo",_S_IFIFO|0666,0);
    printf("writing for reader process:\n");
    fd=open("myfifo",O_WRONLY);
    printf("enter the string: ");
    scanf("[^\n]%s",&str);
    nbw=write(fd,str,strlen(str));
    printf("writer process wrote %d bytes: %s\n",nbw,str);
    return 0;
}