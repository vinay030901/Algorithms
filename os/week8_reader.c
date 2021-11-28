#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>
#include<string.h>
int main()
{
    void *shared_memory;
    char buff[100];
    int shmid = 0;
    shmid= shmget((key_t)1122,1024,0666);//same key and same permissions
    shared_memory = shmat(shmid,NULL,0);//process attached to shared memory segment
    printf("process attached at %p\n",shared_memory);
    printf("Data read from shared memory is: %s\n",(char *)shared_memory);
}