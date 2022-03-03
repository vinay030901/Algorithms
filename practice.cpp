#include <bits/stdc++.h>
using namespace std;
bool fun()
{
    long long a, b, c;
    cin >> a >> b;
    int arr[b];
    map<int, int> ma, mb;
    for (int i = 0; i < a; i++)
    {
        cin >> c;
        ma[c]++;
    }
    for (int i = 0; i < b; i++)
    {
        cin >> c;
        mb[c]++;
        arr[i] = c;
    }
    for (int i = 0; i < b; i++)
    {
        if (ma[arr[i]] < mb[arr[i]])
            return false;
    }
    return true;
}
int main()
{

    if(fun()==true)cout<<"Yes\n";
    else cout<<"No\n";
}