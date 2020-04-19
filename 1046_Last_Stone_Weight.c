/*
Runtime: 4 ms, faster than 19.14% of C online submissions for Last Stone Weight.
Memory Usage: 5.2 MB, less than 100.00% of C online submissions for Last Stone Weight.
*/

//brutle force
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int lastStoneWeight(int* stones, int stonesSize){

    if(stonesSize == 1)
    {
        return stones[0];
    }
    
    int zero = 0;
    
    while(zero < stonesSize)
    {
        qsort(stones, stonesSize, sizeof(int), cmpfunc);
        
        if(stones[stonesSize - 1] != stones[stonesSize - 2])
        {
            stones[stonesSize - 1] -= stones[stonesSize - 2];
            stones[stonesSize - 2] = 0;
            zero ++;
        }
        else
        {
            stones[stonesSize - 1] = 0;
            stones[stonesSize - 2] = 0;
            zero += 2;
        }
        
    }
    
    return stones[stonesSize - 1];
}


/*
Runtime: 4 ms, faster than 19.14% of C online submissions for Last Stone Weight.
Memory Usage: 5.3 MB, less than 100.00% of C online submissions for Last Stone Weight.
*/
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int lastStoneWeight(int* stones, int stonesSize){

    if(stonesSize == 1)
    {
        return stones[0];
    }
    
    int x, y;
    
    for(int s = stonesSize; s > 1; s--)
    {
        qsort(stones, s, sizeof(int), cmpfunc);
        
        y = stones[s - 1];
        x = stones[s - 2];
        
        stones[s - 2] = y - x;
        stones[s - 1] = 0;    
    }
    
    return stones[0];
}
