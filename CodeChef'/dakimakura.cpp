#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll c[n],t[n-1];
        for(int i=0;i<n;i++)
            cin>>c[i];
        for(int i=0;i<n-1;i++)
            cin>>t[i];
        for(int i=n-1;i>=0;i--)
        {
            if(c[i]==0)
                n--;    
        }
    }
}