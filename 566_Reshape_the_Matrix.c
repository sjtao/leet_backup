/*
Runtime: 44 ms, faster than 50.00% of C online submissions for Reshape the Matrix.
Memory Usage: 11.1 MB, less than 100.00% of C online submissions for Reshape the Matrix.
*/

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** matrixReshape(int** nums, int numsSize, int* numsColSize, int r, int c, int* returnSize, int** returnColumnSizes){
    
    int i, j;
    int col = *numsColSize;
    
    if(numsSize * col != r * c)
    {
        r = numsSize;
        c = col;
    }
    
    int **reshape = malloc(r*sizeof(int *));
    *returnColumnSizes = malloc(r*sizeof(int*));
    
    for(i = 0; i < r; i++)
    {
        reshape[i] = malloc(c*sizeof(int));
        (*returnColumnSizes)[i] = c;
    }
    
    int index = 0;
    int x, y;
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            x = index / col;
            y = index % col;
            index ++;
            reshape[i][j] = nums[x][y];
        }
    }
    
    *returnSize = r;
    return reshape;
}

