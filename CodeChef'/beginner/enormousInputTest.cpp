#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,m;
    int c=0;
    cin>>n>>k;
    while(n--)
    {
        cin>>m;
        if(m%k==0)
            c++;
    }
    cout<<c;
}