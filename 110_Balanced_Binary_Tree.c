/*
Runtime: 8 ms, faster than 72.07% of C online submissions for Balanced Binary Tree.
Memory Usage: 8.7 MB, less than 100.00% of C online submissions for Balanced Binary Tree.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int Depth(struct TreeNode* root){
    
    if(root==NULL) return 0;
    
    int r=Depth(root->right);
    int l=Depth(root->left);
    
    return 1 + (r > l ? r : l);
    
}

bool isBalanced(struct TreeNode* root){

    if(root==NULL) return 1;
    
    int l = Depth(root->left);
    int r = Depth(root->right);
    
    if(abs(l-r) < 2 && isBalanced(root->left) && isBalanced(root->right))
        return 1;
    
    return 0;
}

