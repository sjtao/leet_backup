/*
Runtime: 8 ms, faster than 21.82% of C online submissions for Maximum Depth of N-ary Tree.
Memory Usage: 6.5 MB, less than 100.00% of C online submissions for Maximum Depth of N-ary Tree.
*/

/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */


int* maxDepth(struct Node* root) {
    if(root==NULL)
    {
        return 0;
    }
    
    int depth = 0;
    int i, n;
    for(i = 0; i < root->numChildren; i++)
    {
        n = maxDepth(root->children[i]) ;
        depth = (depth > n ? depth : n);
    }
    
    return depth + 1;
}
