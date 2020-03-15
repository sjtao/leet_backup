

int projectionArea(int** grid, int gridSize, int* gridColSize){

    int col = gridSize;
    *gridColSize = col;
    
    int top = 0;
    int *front = malloc(col * sizeof(int));
    int *side = malloc(col * sizeof(int));
    int area = 0;
    
    int i, j;
    
    //top, front view
    for (i = 0; i < col; i++)
    {
        front[i] = 0;
        for(j = 0; j < col; j++)
        {
            if (grid[i][j] != 0)
            {
                top += 1; 
            }
            if (front[i] < grid[i][j])
            {
                front[i] = grid[i][j];
            }
        }
    }
    //side view
    for(j = 0; j < col; j++)
    {
        side[j] = 0;
       for(i = 0; i < col; i++) 
       {
           if(side[j] < grid[i][j])
               side[j] = grid[i][j];
       }
    }
     //area
    area = top;
    for(i = 0; i < col; i++)
    {
        area += front[i] + side[i];
    }
    
    return area;
}

