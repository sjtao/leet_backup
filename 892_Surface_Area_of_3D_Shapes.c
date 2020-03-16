
int surfaceArea(int** grid, int gridSize, int* gridColSize){
    * gridColSize = gridSize;
    int i,j;
    int area = 0;
    
    for(i = 0; i < gridSize; i++)
    {
        for(j = 0; j < gridSize; j++)
        {
            if(grid[i][j] != 0)
            {
                area += 2;
            }
        }
    }
    
    for(i = 0; i < gridSize; i++)
    {
        area += grid[0][i] + grid[i][gridSize-1] + grid[i][0] + grid[gridSize-1][i];
        for(j = 1; j < gridSize; j++)
        {
            if(grid[i][j] != grid[i][j-1])
                area += abs(grid[i][j] - grid[i][j-1]);
            if(grid[j][i] != grid[j-1][i])
                area += abs(grid[j][i] - grid[j-1][i]);
        }
    }
    
    return area;        
}

