
//straightfoward but slow

int oddCells(int n, int m, int** indices, int indicesSize, int* indicesColSize){
    //* indicesColSize = 2;
     int **arr = (int **)malloc(n * sizeof(int *)); 
    for (int i=0; i<n; i++)
    {
        arr[i] = (int *)malloc(m * sizeof(int));
        memset((void *) arr[i], 0x0, sizeof(int) * m);
    }
    
    for(int i = 0; i < indicesSize; i++)
    {
        int row = indices[i][0];
        int col = indices[i][1];
        
        for(int j = 0; j < m; j++)
        {
            arr[row][j] ++;
        }
        
        for(int k = 0; k < n; k++)
        {
            arr[k][col] ++;
        }
    }
    
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if (arr[i][j]%2 != 0)
            {
                count ++;
            }
        }
    }
    
    return count;
}


//fast
int oddCells(int n, int m, int** indices, int indicesSize, int* indicesColSize){

    int **matrix;
    int i, j;
    int row, col;
    int count = 0;
    
    matrix = (int **) malloc(sizeof(int *) * n);
    for (i = 0; i < n; ++i) {
        matrix[i] = malloc(sizeof(int) * m);
        memset((void *) matrix[i], 0x0, sizeof(int) * m);
    }
    
    for (i = 0; i < indicesSize; ++i) {
        row = indices[i][0];
        col = indices[i][1];
        
        for (j = 0; j < m; j++)
            count += ((++matrix[row][j]) & 0x1 ? 1 : -1);
        
        for (j = 0; j < n; j++)
            count +=  ((++matrix[j][col]) & 0x1 ? 1 : -1);
    }
    
    for (i = 0; i < n; i++)
        free(matrix[i]);
    
    free(matrix);
    
    return count;    
}
