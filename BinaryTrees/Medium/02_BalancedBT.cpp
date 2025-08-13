//Aman Kumar Sharma
//Balanced Binary Tree (leetcode-110)
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

int findHeight(TreeNode *root){
    if(!root)return 0;
    int leftHeight=findHeight(root->left);
    if(leftHeight==-1)return -1;
    int rightHeight=findHeight(root->right);
    if(rightHeight==-1)return -1;
    if(abs(leftHeight-rightHeight)>1)return -1;
    return max(leftHeight, rightHeight)+1;
}

bool checkBalancedTree(TreeNode *root){
    return findHeight(root)!=-1;
}