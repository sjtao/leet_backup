/*
Runtime: 68 ms, faster than 92.19% of C online submissions for Island Perimeter.
Memory Usage: 8.6 MB, less than 100.00% of C online submissions for Island Perimeter.
*/

int islandPerimeter(int** grid, int gridSize, int* gridColSize){
    int i, j;
    int perimeter = 0;
    
    for(i = 0; i < gridSize; i++)
    {
        for (j = 0; j < gridColSize[i]; j++)
        {
            if (grid[i][j] == 1) 
            {
                perimeter += 4;
            
                if (j+1 <  gridColSize[i] && grid[i][j+1] == 1)
                    perimeter -= 2;
                if (i+1 < gridSize && grid[i+1][j] == 1) 
                    perimeter -= 2;
            }
        }
    }
    
    return perimeter;
}
