int countNegatives(int** grid, int gridSize, int* gridColSize){
    int i, j;
    int count = 0;
    for(i = 0; i < gridSize; i++)
    {
        for(j = 0; j < gridColSize[i]; j++)
        {
            if(grid[i][j] < 0)
                count ++;
        }
    }
    return count;
}
