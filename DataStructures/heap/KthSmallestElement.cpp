#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && arr[l]>arr[largest])
        largest=l;
    if(r<n && arr[r]>arr[largest])
        largest=r;
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
void build_heap(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
        heapify(arr,n,i);
}
void printArray(int arr[],int n)
{
    cout<<"array:  ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"   ";
}
int main()
{
    int arr[]={7,10,4,3,20,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    build_heap(arr,n);
    printArray(arr,n);
}