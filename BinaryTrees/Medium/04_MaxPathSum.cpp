//Aman Kumar Sharma
//Binary Tree Maximum Path Sum (leetcode-124)
#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val; 
    TreeNode *left;
    TreeNode *right;
    TreeNode():val(0), left(nullptr), right(nullptr){};
    TreeNode(int x):val(x), left(nullptr), right(nullptr){};
    TreeNode(int x, TreeNode *left, TreeNode *right):val(x), left(left), right(right){};
};

int MaxPathDown(TreeNode *root, int maxi){
    if(!root)return 0;
    int leftSum=max(0, MaxPathDown(root->left, maxi));
    int rightSum=max(0, MaxPathDown(root->right, maxi));
    maxi=max(maxi, root->val+leftSum+rightSum);
    return root->val+max(leftSum, rightSum);
}

int MaxPathSum(TreeNode *root){
    int maxi=INT_MIN;
    MaxPathDown(root, maxi);
    return maxi;
}