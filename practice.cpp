#include<bits/stdc++.h>
using namespace std;
int dfs0(string s,int i,int j)
{
    if(i==j) return 0;
    if(s[i]=='1' and s[j]=='0')
    {
        return 1+dfs0(s,i+1,j)+dfs0(s,i,j-1);
    }
    else if(s[i]=='1')
    return dfs0(s,i,j-1);
    else return dfs0(s,i+1,j);
}
int dfs1(string s,int i,int j)
{
    if(i==j) return 0;
    if(s[i]=='0' and s[j]=='1')
    {
        return 1+dfs1(s,i+1,j)+dfs1(s,i,j-1);
    }
    else if(s[i]=='0')
    return dfs1(s,i,j-1);
    else return dfs1(s,i+1,j);
}
long long numberOfWays(string s) {
    int n=s.length();
    long long ans=0;
    int cnt;
    for(int i=0;i<n-2;i++)
    {
        if(s[i]=='0')
        {
            int j=i+1,k=n-1;
            cnt=dfs0(s,j,k);
        }
        else 
        {
            int j=i+1,k=n-1;
            cnt=dfs1(s,j,k);
        }
        ans+=cnt;
    } 
    return ans;
}
int main()
{
    
    cout<<"hello world"<<endl;
}