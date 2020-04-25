/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Pascal's Triangle.
Memory Usage: 5.6 MB, less than 100.00% of C online submissions for Pascal's Triangle.
*/

int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    
    if(numRows == 0)
    {
        *returnSize = 0;
        
        return;
    }
    
    int i, j;
    
    int ** Pascal = malloc(numRows * sizeof(int *));
    * returnColumnSizes = malloc(numRows * sizeof(int *));
    
    for(i = 0; i < 1; i++)
    {        
        Pascal[i] = malloc((i+1) * sizeof(int));
        (*returnColumnSizes)[i] = i+1;
    }
    
    Pascal[0][0] = 1;
    
    for(i = 1; i < numRows; i++)
    {
        Pascal[i] = malloc((i+1) * sizeof(int));
        (*returnColumnSizes)[i] = i+1; //i+1 row
                
        Pascal[i][0] = 1;
        for(j = 1; j < i; j++)
        {
            Pascal[i][j] = Pascal[i-1][j-1] + Pascal[i-1][j];
        }
        Pascal[i][i]= 1;
    }
    
    *returnSize = numRows;
    
    return Pascal;
        
}

