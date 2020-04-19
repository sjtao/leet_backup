/*
Runtime: 52 ms, faster than 7.14% of C online submissions for Transpose Matrix.
Memory Usage: 9.5 MB, less than 100.00% of C online submissions for Transpose Matrix.
*/

int** transpose(int** A, int ASize, int* AColSize, int* returnSize, int** returnColumnSizes){

    int col = *AColSize;
    
    int **T = malloc(col * sizeof(int *));
    *returnColumnSizes = malloc(col * sizeof(int *));
    
    int i, j;
    
    for(j = 0; j < col; j++)
    {
        T[j] = malloc(ASize * sizeof(int));
        (*returnColumnSizes)[j] = ASize;
        
        for(i = 0; i < ASize; i++)
        {
            T[j][i] = A[i][j];
        }
    }
    
    *returnSize = col;
    
    return T;
}
