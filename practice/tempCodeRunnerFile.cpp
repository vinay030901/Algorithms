#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,p,k,sum=0,n_g,val_mod,min=0,val_g;
        cin>>n>>p>>k;
        ll n_mod=n%k;
        if(n_mod>0)
            {n_g=n/k+1;
            val_mod=p%k;
            val_g=p/k+1;
            min=val_mod-n_mod;
            cout<<val_mod<<"    "<<val_g<<"   "<<n_g<<"\n";
            cout<<"min found is: "<<min<<endl;
            if(min<0)
                sum=n_g*val_mod+val_g;
            else
                sum=n_g*val_mod+val_g-min;}
        else
            {n_g=n/k;
        val_mod=p%k;
        min=val_mod-n_mod;
        val_g=p/k+1;
        sum=n_g*val_mod+val_g;}
        cout<<sum<<"\n";
    }

}