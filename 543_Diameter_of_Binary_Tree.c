/*
Runtime: 16 ms, faster than 31.90% of C online submissions for Diameter of Binary Tree.
Memory Usage: 7.8 MB, less than 100.00% of C online submissions for Diameter of Binary Tree.
*/

int maxDepth(struct TreeNode* root){
    
    if(!root) return 0;
    
    int r=maxDepth(root->right);
    int l=maxDepth(root->left);
    
    return (r>l?r:l) + 1;
}


int diameterOfBinaryTree(struct TreeNode* root){

    if(!root) return 0;
    
    int LeftDiameter = diameterOfBinaryTree(root->left);
    int RightDiameter = diameterOfBinaryTree(root->right);
    int nodeDiameter = maxDepth(root->left) + maxDepth(root->right);
    
    int max = LeftDiameter>RightDiameter? LeftDiameter:RightDiameter;
    
    return max > nodeDiameter ? max : nodeDiameter;
}
