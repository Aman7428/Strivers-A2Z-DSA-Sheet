//Aman Kumar Sharma
//Maximum Depth of Binary Tree (leetcode-104)
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

int MaxHeight(TreeNode *root){
    if(!root)return 0;
    int left=MaxHeight(root->left);
    int right=MaxHeight(root->right);
    int ans=max(left, right);
    return ans+1;
}
