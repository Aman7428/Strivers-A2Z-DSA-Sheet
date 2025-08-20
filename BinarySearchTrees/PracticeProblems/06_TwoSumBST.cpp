//Aman Kumar Sharma
//Two Sum IV - Input is a BST (leetcode-653)
#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode():val(0), left(nullptr), right(nullptr){};
    TreeNode(int x):val(x), left(nullptr), right(nullptr){};
    TreeNode(int x, TreeNode* left, TreeNode* right):val(0), left(left), right(right){};
};

void dfs(TreeNode* root, vector<int>& inorder){
    if(!root)return;
    dfs(root->left, inorder);
    inorder.push_back(root->val);
    dfs(root->right, inorder);
}

vector<int>InorderTraversal(TreeNode* root){
    vector<int>inorder;
    dfs(root, inorder);
    return inorder;
}

bool TwoSumInBST(TreeNode* root, int k){
    vector<int>vec=InorderTraversal(root);
    int n=vec.size();
    int l=0, r=n-1;
    while(l<r){
        int sum=vec[l]+vec[r];
        if(sum==k)return true;
        else if(sum<k)l++;
        else r--;
    }
    return false;
}