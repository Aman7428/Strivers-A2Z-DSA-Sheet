//Aman Kumar Sharma
//Insert into a Binary Search Tree (leetcode-701)
#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode():val(0), left(nullptr), right(nullptr){};
    TreeNode(int x):val(x), left(nullptr), right(nullptr){};
    TreeNode(int x, TreeNode *left, TreeNode *right):val(0), left(left), right(right){};
};

TreeNode* InsertIntoBST(TreeNode *root, int val){
    TreeNode *curr=root;
    if(!root)return new TreeNode(val);
    while(true){
        if(curr->val<=val){
            if(curr->right!=NULL)curr=curr->right;
            else{
                curr->right=new TreeNode(val);
                break;
            }
        }
        else{
            if(curr->left!=NULL)curr=curr->left;
            else{
                curr->left=new TreeNode(val);
                break;
            }
        }
    }
    return root;
}