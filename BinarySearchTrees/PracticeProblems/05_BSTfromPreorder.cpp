//Aman Kumar Sharma
//Construct Binary Search Tree from Preorder Traversal (leetcode-1008)
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

TreeNode* InsertNode(TreeNode* root, int val){
    if(!root)return NULL;
    if(val<root->val)root->left=InsertNode(root->left, val);
    else root->right=InsertNode(root->right, val);
    return root;
}

TreeNode* BSTfromPreorder(vector<int>preorder){
    TreeNode* root=new TreeNode(preorder[0]);
    for(int i=1; i<preorder.size(); i++){
        InsertNode(root, preorder[i]);
    }
    return root;
}