/*
Runtime: 4 ms, faster than 92.07% of C online submissions for Maximum Depth of Binary Tree.
Memory Usage: 7.6 MB, less than 100.00% of C online submissions for Maximum Depth of Binary Tree.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxDepth(struct TreeNode* root){
    
    if(!root) return 0;
    
    int r=1+maxDepth(root->right);
    int l=1+maxDepth(root->left);
    
    return (r>l)? r : l;
    
}
