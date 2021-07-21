#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int withdrawal_money;
    float total_money;
    cin>>withdrawal_money>>total_money;
    if(withdrawal_money<=total_money-0.5 && withdrawal_money%5==0)
    {
        cout<<fixed<<setprecision(2)<<total_money-withdrawal_money-0.5;
    }
    else
    cout<<fixed<<setprecision(2)<<total_money;
}