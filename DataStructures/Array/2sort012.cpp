//sort an array of 0's, 1's and 2's
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //we will follow the dutch flag algorithm
    int arr[]={2,0,1,1,2,0,2,2,0,0,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0,mid=0,high=n-1;
    while(mid<=high) {
        if(arr[mid]==0)
            swap(arr[mid++],arr[low++]);
        else if(arr[mid]==1)
            mid++;
        else if(arr[mid]==2)
            swap(arr[mid],arr[high--]);
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}