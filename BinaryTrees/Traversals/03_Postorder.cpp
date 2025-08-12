//Aman Kumar Sharma
//Binary Tree Postorder Traversal (leetcode-145)
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

void dfs(TreeNode *root, vector<int>& postorder){
    if(!root)return;
    dfs(root->left, postorder);
    dfs(root->right, postorder);
    postorder.push_back(root->val);
}

vector<int> PostorderTraversal(TreeNode *root){
    vector<int>postorder;
    dfs(root, postorder);
    return postorder;
}