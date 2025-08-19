//Aman Kumar Sharma
//Lowest Common Ancestor of a Binary Search Tree (leetcode-235)
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

TreeNode* findLCAofBST(TreeNode* root, TreeNode* p, TreeNode* q){
    if(!root)return NULL;

    if(p->val<root->val && q->val<root->val)return findLCAofBST(root->left, p, q);
    if(p->val>root->val && q->val>root->val)return findLCAofBST(root->right, p, q);

    return root;
}