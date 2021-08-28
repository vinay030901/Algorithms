#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,7,5};
    int n=5,s=100;
    int rsum=0,lsum=0,l=0,r=0,sum=0,i=0;
        while(l<n)
        {
            if(sum<s)
            {
                rsum+=arr[r];
                r++;
            }
            if(sum>s)
            {
                lsum+=arr[l];
                l++;
            }
            
            sum=rsum-lsum;
            cout<<rsum<<"  "<<lsum<<"   "<<sum<<endl;
            if(sum==s)
            {
                break;
                i=1;
            }
        }
        if(i==1)
        cout<<l+1<<" and "<<r<<endl;
        else
        cout<<(-1);
}