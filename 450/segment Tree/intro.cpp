/*

the node (l,r) keep the the result from l to r

we have (l,mid) and (mid+1,r), that is the data is divided with middle

*/
#include <bits/stdc++.h>
using namespace std;
int arr[]={1,2,-3};
int n=3;
int tree[12];
void build(int ind, int l, int r)
{
    if (l == r)
    {
        tree[ind] = arr[l];
        return ;
    }
    int mid = (l+r) / 2;
    build(2 * ind, l, mid);
    build(2 * ind + 1, mid + 1, r);
    tree[ind]=min(tree[2*ind],tree[2*ind+1]);
}
int calculateHeight(int n)
{
    n=log2(n);
    n=(int)(ceil(n));
    int k = n;
    int h= (2 * (2 ^ k)) - 1;
    return h;
}
int main()
{
    //int h = calculateHeight(n);
    build(0,0,2);
    for (int i = 1; i < 12; i++)
        cout << tree[i] << " ";
}
