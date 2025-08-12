//Aman Kumar Sharma
//Binary Tree Inorder Traversal (leetcode-94)
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

void dfs(TreeNode *root, vector<int>& inorder){
    dfs(root->left, inorder);
    inorder.push_back(root->val);
    dfs(root->right, inorder);
}

vector<int> InorderTraversal(TreeNode *root){
    vector<int>inorder;
    dfs(root, inorder);
    return inorder;
}