#include<iostream>
#include <bitset>
typedef long long ll;
using namespace std;
string to_binary(ll n)
{
    return bitset<8>(n).to_string();
}
int main()
{
    /*ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        vector<int>v;
        cin>>n;
        for(ll i=1;i<n;i++)
        {
            string s=to_binary(i);
            string srev=s;
            reverse(srev.begin(),srev.end());
            if(s==srev)
                v.push_back(i);
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
    }*/
    int n=5,i=0;
    string str;
    str=to_binary(n);
    while(str[i]==0)
    {
        
    }
}

Scanner sc=new Scanner(System.in);
int t=sc.nextInt();
int c=n;
Set<Integer> set=new HashSet<Integer()>;
while(c-->0){
    set.add(sc.nextInt());
}
if(set.size()<=12 && n>=12){
    System.out.println("yes");}
else{
    System.out.println("no");
}
