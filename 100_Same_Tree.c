/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Same Tree.
Memory Usage: 5.2 MB, less than 100.00% of C online submissions for Same Tree.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    
    if(p==NULL && q==NULL)
    {
        return 1;
    }
    
    if(p!=NULL && q!=NULL)
    {
        return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
    
    return 0; 
}
