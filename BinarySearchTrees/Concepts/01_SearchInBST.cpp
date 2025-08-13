//Aman Kumar Sharma
//Search in a Binary Search Tree (leetcode-700)
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

TreeNode* SearchInBST(TreeNode *root, int val){
    while(root!=NULL){
        if(root->val==val)return root;
        else if(val<root->val)root=root->left;
        else root=root->right;
    }
    return nullptr;
}
