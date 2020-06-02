/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Symmetric Tree.
Memory Usage: 6.6 MB, less than 100.00% of C online submissions for Symmetric Tree.
*/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool Mirror(struct TreeNode* root1, struct TreeNode* root2)
{
    if(root1 == NULL && root2 == NULL)
    {
        return 1;
    }
    
    if(root1 && root2 && (root1->val == root2->val))
    {
        return Mirror(root1->left, root2->right) && Mirror(root2->left, root1->right);
    }
    
    return 0;
}

bool isSymmetric(struct TreeNode* root){
    
    if(root == NULL) return 1;
    else return Mirror(root->left, root->right);
}
