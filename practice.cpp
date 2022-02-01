#include<bits/stdc++.h>
using namespace std;
int LongestSubstringWithoutRepeatingCharacters(string str,int n){
    int mx=INT_MIN;
    string res="";
    for(int i=0;i<n;i++)
    {
        if(res.find(str[i])==string::npos)
        {res+=str[i];
        cout<<res<<endl;}
        else
        {
            int cnt=res.length();
            cout<<str[res.find(str[i])]<<endl;
            cout<<cnt<<endl;
            cout<<res<<endl;
            if(cnt>mx)
            mx=cnt;
            res.erase(res.begin(),res.begin()+res.find(str[i])+1);
            res+=str[i];
        }
    }
    int cnt=res.length();
    cout<<res<<endl;
    mx=max(mx,cnt);
    return mx;
}
int main()
{
    string str = "abbcacbddbcd";
    int n=str.length();
    cout<<LongestSubstringWithoutRepeatingCharacters(str,n);
}