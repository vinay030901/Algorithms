/*
Given two integer arrays inorder and postorder where inorder is the inorder traversal of a binary tree and
postorder is the postorder traversal of the same tree, construct and return the binary tree.

Example 1:
https://assets.leetcode.com/uploads/2021/02/19/tree.jpg
Input: inorder = [9,3,15,20,7], postorder = [9,15,7,20,3]
Output: [3,9,20,null,null,15,7]
Example 2:

Input: inorder = [-1], postorder = [-1]
Output: [-1]*/

#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *build(vector<int> &postorder, int postStart, int postEnd, vector<int> &inorder, int inStart, int inEnd, unordered_map<int, int> &mp)
{
    if (postStart > postEnd || inStart > inEnd)
        return NULL;
    TreeNode *root = new TreeNode(postorder[postEnd]);

    int inRoot = mp[root->val];
    int numLeft = inRoot - inStart;

    root->left = build(postorder, postStart, postStart + numLeft - 1, inorder, inStart, inRoot - 1, mp);
    root->right = build(postorder, postStart + numLeft, postEnd - 1, inorder, inRoot + 1, inEnd, mp);

    return root;
}
TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
{
    // at first, we make a map for inorder for the index, to check the position of left subtree and right subtree
    unordered_map<int, int> mp;
    for (int i = 0; i < inorder.size(); i++)
        mp[inorder[i]] = i;
    TreeNode *root = build(postorder, 0, postorder.size() - 1, inorder, 0, inorder.size() - 1, mp);
    return root;
}

// the third solution is best and linear
// we make proper use of bst here as we traverse the tree
// what we do is have a upper bound value with us, start with int_max, later it will change
// so in helper function, we check if the upper bound is greater than vector value, if it is, we will enter the function
// or else we will return NULL
// now we make a new root using that vector value
// and try to add it to the left side, if the root value is greater again, the new value will be added or else, it will return NULL
// if it return NULL, we will now compare with the bound value, that is the above the root, and compare
// this process will flow like that only
TreeNode *helper(vector<int> &preorder, int &i, int bound)
{
    if (i == preorder.size() || preorder[i] > bound)
        return NULL;
    TreeNode *root = new TreeNode(preorder[i++]);
    root->left = helper(preorder, i, root->val);
    root->right = helper(preorder, i, bound);
    return root;
}
TreeNode *bstFromPreorder(vector<int> &preorder)
{
    int i = 0;
    return helper(preorder, i, INT_MAX);
}