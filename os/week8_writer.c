#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>
#include<string.h>
int main()
{
    void *shared_memory;//to store or print the address, where process is attached 
    char buff[100];
    int shmid;
    shmid=shmget((key_t)1122,1024,0666|IPC_CREAT);//creates shared memory segment whose size is 1024 bytes, read-write abilities
    printf("the value of shmid is %d\n",shmid);
    shared_memory=shmat(shmid,NULL,0);//process attached to shared memory segment
    printf("process attached at %p/n",shared_memory);
    printf("enter some data to write the shared memory: ");
    read(0,buff,100);//get some input from the user
    strcpy(shared_memory,buff);//data written into shared memory
    printf("you wrote: %s\n",(char*)shared_memory);
}