#include<bits/stdc++.h>
using namespace std;
bool canThreePartsEqualSum(vector<int>& arr) {
        int s=accumulate(arr.begin(),arr.end(),0);
        if(s%3!=0)
            return false;
        int n=s/3;
        int k=0,f=0,sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            cout<<sum<<endl;
            if(sum==n)
            {
                cout<<"sum in 1: "<<sum<<endl;
                k=i;
                sum=0;
                f=1;
                break;
            }
        }
        for(int i=k+1;i<arr.size();i++)
        {
            sum+=arr[i];
            if(sum==n)
            {
                cout<<"sum in 2: "<<sum<<endl;
                k=i;
                sum=0;
                f=2;
                break;
            }
        }
        for(int i=k+1;i<arr.size();i++)
        {
            sum+=arr[i];
        }
        if(sum==n && f==2)
            return true;
        return false;
    }
int main()
{
    vector<int>arr={1,-1,1,-1};
    cout<<canThreePartsEqualSum(arr);
}