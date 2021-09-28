#include<stdio.h>
#include<unistd.h>
void main(){
    printf("hello bro");
    fork();
    printf("world");
}