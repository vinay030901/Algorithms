#include<bits/stdc++.h>
using namespace std;
class Solution{
public:	

    void isort(int arr[],int s,int e)
    {
        int i,j;
        for(i=s;i<=e;i++)
        {
            int key=i;
            j=i-1;
            while(arr[j]>key && j>=0)
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
    }
    int issort(int arr[],int n)
    {
        int f=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
            f=1;
    }
    if(f==1)
        return 0;
    else
        return 1;
    }
	vector<int> printUnsorted(int arr[], int n) {
	    int s,e,i;
	    for(s=0;s<n;s++)
	        {
	            if(arr[s]>arr[s+1])
	                break;
	        }
	    for(e=n-1;e>=s;e--)
	        {
	            if(arr[e]<arr[e-1])
	                break;
	        }
	    isort(arr,s,e);
	    int f=issort(arr,n);
	    if(f==0)
	    {
	        int max=arr[s],min=arr[e];
	        int t=s;
	        for(i=0;i<t;i++)
	        {
	            if(arr[i]>max)
	                s=i;
	        }
	        for(int j=e+1;j<n;j++)
	        {
	            if(arr[j]<min)
	                e=j;
	        }
	        vector<int>v1;
	        v1.push_back(s);
	        v1.push_back(e);
	        return v1;
	    }
	    else
	    {
	        vector<int>v1;
	        v1.push_back(s);
	        v1.push_back(e);
	        return v1;
	    }
	}
};
int main()
{
    int arr[]={10,12,20,30,25,40,32,31,35,50,60};
    Solution ob;
    int n=sizeof(arr)/sizeof(arr[0]);
    auto ans=ob.printUnsorted(arr,n);
    cout<<ans[0]<<"    "<<ans[1];
}