/*
Runtime: 80 ms, faster than 44.44% of C online submissions for Shift 2D Grid.
Memory Usage: 14.1 MB, less than 100.00% of C online submissions for Shift 2D Grid.
*/

int** shiftGrid(int** grid, int gridSize, int* gridColSize, int k, int* returnSize, int** returnColumnSizes){

    int col = *gridColSize;
    
    int ** shift = malloc(gridSize * sizeof(int *));
    *returnColumnSizes = malloc(gridSize * sizeof(int *));
    
    int i, j;
    for(i = 0; i < gridSize; i++)
    {   
        shift[i] = malloc(col * sizeof(int));
        (*returnColumnSizes)[i] = col;
    }
    
    int index = k % (gridSize * col) - 1;
    int x, y;
    
    for(i = 0; i < gridSize; i++)
    {
        for(j = 0; j < col; j++)
        {
            
            index ++;
            x = (index / col) % gridSize;
            y = index % col;
            
            shift[x][y] = grid[i][j];
        }
    }
    
    *returnSize = gridSize;
    return shift;
    
}
