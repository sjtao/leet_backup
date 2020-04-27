/*
Runtime: 80 ms, faster than 84.37% of C online submissions for Range Sum of BST.
Memory Usage: 42 MB, less than 100.00% of C online submissions for Range Sum of BST.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int sum(int val, int L, int R){
       
    if(L <= val && val <= R)
    {
        return val;
    }

    return 0;

}

int rangeSumBST(struct TreeNode* root, int L, int R){
    if(root==NULL) return 0;
    
    return (sum(root->val,L,R) + rangeSumBST(root->right,L,R) +  rangeSumBST(root->left,L,R));
    
}
