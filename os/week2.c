#include<unistd.h>
#include<stdio.h>
#include<sys/wait.h>
#include<sys/types.h>
int main()
{
    int n,i,sume=0,sumo=0,;
    pid_t p;
    p=fork();
    printf("enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements of array: ");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    if(p==0){
        for(i=0;i<n;i++)
            if(arr[i]%2==0){
                sumo+=arr[i];
            }
        printf("The sum of odd numbers using child is: %d\n",sumo);
    }
    else{
        for(i=0;i<n;i++)
            if(arr[i]%2!=0){
                sume+=arr[i];
            }
        printf("The sum of even numbers using child is: %d\n",sume);
    }
}