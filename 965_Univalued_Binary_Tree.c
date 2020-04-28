/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Univalued Binary Tree.
Memory Usage: 5.7 MB, less than 100.00% of C online submissions for Univalued Binary Tree.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool compare(struct TreeNode* t1, struct TreeNode* t2)
{
    if(t1 == NULL || t2 == NULL)
        return 1;
    
    if(t1->val == t2->val)
        return 1;
    else
        return 0;
    
    return;
}

bool isUnivalTree(struct TreeNode* root){
    
    if(root==NULL)
        return 1;
        
    return (compare(root, root->left) && compare(root, root->right) && isUnivalTree(root->left) && isUnivalTree(root->right));
}
