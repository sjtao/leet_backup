/*
Runtime: 4 ms, faster than 37.97% of C online submissions for Height Checker.
Memory Usage: 5.5 MB, less than 100.00% of C online submissions for Height Checker.
*/



int heightChecker(int* heights, int heightsSize){

    //sorting 
    int temp;
    int *array = malloc(heightsSize * sizeof(int));
    int i, j;
    
    for(i = 0; i < heightsSize; i++)
    {
        array[i] = heights[i];
    }
    
    for(i = 0; i < heightsSize; i++)
    {
        for(j = i+1; j < heightsSize; j++)
        {
            if(heights[i] > heights[j])
            {
                temp = heights[i];
                heights[i] = heights[j];
                heights[j] = temp;
            }
        }
    }
    
    //comparing
    int cnt = 0;
    for(i = 0; i < heightsSize; i++)
    {
        if(array[i] != heights[i]) cnt++;
    }
    
    return cnt;
}

