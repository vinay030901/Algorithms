/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k,
and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

Example 1:

Input: nums = [-1,0,1,2,-1,-4]->[-4,-1,-1,0,1,2]
Output: [[-1,-1,2],[-1,0,1]]
Example 2:

Input: nums = []
Output: []
Example 3:

Input: nums = [0]
Output: []*/
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &arr)
{
    vector<vector<int>> ans;
    int n = arr.size();
    if (n < 3)
        return ans;
    unordered_map<int, int> mp;
    set<vector<int>> s;
    for (auto x : arr)
        mp[x]++;
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]] -= 1;
        for (int j = i + 1; j < arr.size(); j++)
        {
            mp[arr[j]] -= 1;
            int tofind = -(arr[i] + arr[j]);
            if (mp.find(tofind) != mp.end() and mp[tofind] > 0)
            {
                vector<int> v = {arr[i], arr[j], tofind};
                sort(v.begin(), v.end());
                s.insert(v);
            }
            mp[arr[j]]++;
        }
        mp[arr[i]]++;
    }
    ans.assign(s.begin(), s.end());
    return ans;
}
vector<vector<int>> threeSum(vector<int> &arr)
{
    int n = arr.size();
    if (n < 3)
        return {};
    vector<vector<int>> ans;
    set<vector<int>> s;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 2; i++)
    {
        int a = arr[i];
        for (int j = i + 1, k = n - 1; j != k;)
        {
            int sum = arr[j] + arr[k];
            if (a == -sum)
            {
                vector<int> v = {arr[i], arr[j], arr[k]};
                s.insert(v);
            }
            else if (sum > a)
                j--;
            else
                i++;
        }
    }
    ans.assign(s.begin(), s.end());
    return ans;
}
int main()
{
}