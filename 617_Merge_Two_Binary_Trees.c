/*
Runtime: 20 ms, faster than 95.82% of C online submissions for Merge Two Binary Trees.
Memory Usage: 14.5 MB, less than 100.00% of C online submissions for Merge Two Binary Trees.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2){
    
    if(t1==NULL && t2==NULL)
        return 0;
    else if(t1!=NULL && t2==NULL)
        return t1;
    else if(t1==NULL && t2!=NULL)
        return t2;
    else
    {
        t1->val += t2->val;
        t1->left = mergeTrees(t1->left, t2->left);
        t1->right = mergeTrees(t1->right, t2->right);
    }
    
    return t1;

}
