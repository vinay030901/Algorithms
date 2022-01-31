#include <bits/stdc++.h>
using namespace std;
int main()
{
    // we need to find the duplicate number .
    // we can use brute force approach for this and use every number to check if it has come again -O(n^2)
    // another approach could be to use map for this and calculate the frequency but it will take extra space

    int arr[] = {0, 1, 6, 2, 3, 6, 3};
    int num = 7;
    int n = sizeof(arr) / sizeof(arr[0]);
    // we will try to do this in constant space.
    // we will traverse the array and we will add the value of n and at the index value of array
    // the logic is that all the value are less than n, so whenever we add n to it, it will give answer of / n as 1
    // but when we add it twice, the answer changes to 2
    // so every repeated element will have a value 2

    for (int i = 0; i < n; i++)
    {
        arr[arr[i]] += num;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] / (num) >= 2)
            cout << i << " ";
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << "  ";
}