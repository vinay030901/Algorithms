/*
Given an n x n matrix, where every row and column is sorted in non-decreasing order. Find the kth smallest element in 
the given 2D array.
Example, 

Input:k = 3 and array =
        10, 20, 30, 40
        15, 25, 35, 45
        24, 29, 37, 48
        32, 33, 39, 50 
Output: 20
Explanation: The 3rd smallest element is 20 

Input:k = 7 and array =
        10, 20, 30, 40
        15, 25, 35, 45
        24, 29, 37, 48
        32, 33, 39, 50 
Output: 30

Explanation: The 7th smallest element is 30*/

#include<bits/stdc++.h>
using namespace std;
int CountLowerElements(vector<vector<int>>arr)
{

}
int main()
{
    vector<vector<int>>arr={{10, 20, 30, 40},
        {15, 25, 35, 45},
        {24, 29, 37, 48},
        {32, 33, 39, 50}};
    int n=arr.size();
    int k=7;
    /* we need to kth smallest element, one basic way is to put all the data in a matrix and sort it, then access the 
       Kth element in that data structure- O(n^2LogN^2)

       Another method could be to use a priority queue and cap its size to k, then put all elements one by one,
       but both of these ways do not work on the fact that matrix is row column wise sorted.

       So we will use binary search algo for this question to get least complexity*/
       int low=arr[0][0],high=arr[n-1][n-1],ans;
       while(low<=high)
       {
            int mid=(low+high)/2;
            int num=CountLowerElements(arr);
            if(mid<k)
            {
                low=mid+1;
            }
            else if(num>=k){
                ans=mid;
                high=mid-1;
            }
       }
       cout<<ans;
}