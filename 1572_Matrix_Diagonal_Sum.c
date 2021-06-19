/*
Runtime: 16 ms, faster than 74.07% of C online submissions for Matrix Diagonal Sum.
Memory Usage: 6.9 MB, less than 24.07% of C online submissions for Matrix Diagonal Sum.
*/



int diagonalSum(int** mat, int matSize, int* matColSize){
    
    int sum = 0;
    int i;
    for(i = 0; i < matSize; i++)
    {
        sum += mat[i][i];
        sum += mat[i][matSize-1-i];
    }
    if (matSize % 2 == 1)
        sum -= mat[matSize/2][matSize/2];
    
    return sum;

}
