/*
Runtime: 12 ms, faster than 80.39% of C online submissions for Toeplitz Matrix.
Memory Usage: 6 MB, less than 100.00% of C online submissions for Toeplitz Matrix.
*/

bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize){
    
    int i, j;
    
    for(i = 1; i < matrixSize; i++)
    {
        for(j = 1; j < matrixColSize[i]; j++)
        {
            if(matrix[i][j] != matrix[i-1][j-1])
            {
                return false;
            }
        }
    }
    
    return true;
}
