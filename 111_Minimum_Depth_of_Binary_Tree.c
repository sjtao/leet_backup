/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

/*
Runtime: 4 ms, faster than 96.44% of C online submissions for Minimum Depth of Binary Tree.
Memory Usage: 8.1 MB, less than 89.61% of C online submissions for Minimum Depth of Binary Tree.
*/

int minDepth(struct TreeNode* root){
    if (root == NULL) 
        return 0; 
  
    if (root->left == NULL && root->right == NULL) 
        return 1; 

    if (!root->left) 
        return minDepth(root->right) + 1; 
  
    if (!root->right) 
        return minDepth(root->left) + 1; 
  
    return fmin(minDepth(root->left), minDepth(root->right)) + 1; 
}
