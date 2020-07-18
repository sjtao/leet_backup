/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Path Sum.
Memory Usage: 7.8 MB, less than 52.00% of C online submissions for Path Sum.
*/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool hasPathSum(struct TreeNode* root, int sum){
    if(root == NULL)
    {
        return 0;
    }
    
    bool ans = 0;
    int subsum = sum - root->val;
    
    if(subsum == 0 && root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    
    if(root->left)
    {
        ans = ans || hasPathSum(root->left, subsum);
    }
    
    if(root->right)
    {
        ans = ans || hasPathSum(root->right, subsum);
    }
    
    return ans;
}
