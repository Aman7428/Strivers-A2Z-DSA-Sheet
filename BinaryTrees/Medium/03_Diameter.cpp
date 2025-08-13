//Aman Kumar Sharma
//Diameter of Binary Tree (leetcode-543)
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

int findheight(TreeNode *root, int diameter){
    if(!root)return 0;
    int leftHeight=findheight(root->left, diameter);
    int rightHeight=findheight(root->right, diameter);
    diameter=max(diameter, leftHeight+rightHeight);
    return 1+max(leftHeight, rightHeight);
}

int findDiameter(TreeNode *root){
    int diameter=0;
    findheight(root, diameter);
    return diameter;
}