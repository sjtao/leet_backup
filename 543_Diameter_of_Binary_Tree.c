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

/*
Runtime: 8 ms, faster than 71.34% of C online submissions for Diameter of Binary Tree.
Memory Usage: 7.7 MB, less than 100.00% of C online submissions for Diameter of Binary Tree.
*/

int maxDepth(struct TreeNode* root, int *max){
    
    if(!root) return 0;
    
    int r=maxDepth(root->right, max);
    int l=maxDepth(root->left, max);
    
    *max = (r+l) > *max ? (r+l) : *max;
    return (r>l?r:l) + 1;
}


int diameterOfBinaryTree(struct TreeNode* root){

    if(!root) return 0;
    
    int max = 0;
    maxDepth(root, &max);
    return max;
}
