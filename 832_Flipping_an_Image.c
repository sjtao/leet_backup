/*
Runtime: 12 ms, faster than 65.71% of C online submissions for Flipping an Image.
Memory Usage: 6.5 MB, less than 100.00% of C online submissions for Flipping an Image.
*/

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** flipAndInvertImage(int** A, int ASize, int* AColSize, int* returnSize, int** returnColumnSizes){

    int ** R = malloc(ASize * sizeof(int*));
    ** returnColumnSizes = malloc(ASize * sizeof(int));
    
    int col = AColSize[0];
    int i, j;
    
    for(i = 0; i < ASize; i++)
    {
        R[i] = malloc(col * sizeof(int));
        (*returnColumnSizes)[i] = col;
    }
    
    for(i = 0; i < ASize; i++)
    {
        for(j = 0; j < col; j++)
        {
            R[i][j] = (A[i][col-j-1] == 0);
        }
    }
    
    *returnSize = ASize;
    
    return R;
}
