/*

the node (l,r) keep the the result from l to r

we have (l,mid) and (mid+1,r), that is the data is divided with middle

*/
#include<bits/stdc++.h>
using namespace std;
int n=5;
int arr[]={1,5,2,-3,13};
int build(int i,int lf,int rg,int ans[])
{
    if(lf==rg) ans[i]=arr[lf];
    int mid=(lf+rg)/2;

    build(2*i,lf,mid,ans);
    build(2*i+1,mid+1,rg,ans);
    
}

int main()
{
    int ans[4*n];
    int p=build(0,0,n-1,ans);
    int l=sizeof(ans)/sizeof(ans[0]);
    for(int i=0;i<l;i++)
    cout<<ans[i]<<" ";
}
