#include <stdio.h>
#include<string.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
    int fd,nbr;
    char arr[100];
    mknod("myfifo",_S_IFIFO|0666,0);
    printf("writing for reader process:\n");
    fd=open("myfifo",O_RDONLY);
    printf("writing the data for reader process: ");
    nbr=write(fd,arr,strlen(arr));
    printf("reader process read %d bytes: %s\n",nbr,arr);
    return 0;
}