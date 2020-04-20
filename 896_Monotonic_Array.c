/*
Runtime: 92 ms, faster than 23.68% of C online submissions for Monotonic Array.
Memory Usage: 9 MB, less than 100.00% of C online submissions for Monotonic Array.
*/

bool isMonotonic(int* A, int ASize){
    
    if(ASize == 1)
    {
        return true;
    }
    
    int incs = 0;
    int decs = 0;
    for(int i = 1; i < ASize; i++)
    {
        if(A[i] < A[i-1])
        {
            decs ++;
        }
        else if (A[i] > A[i-1])
        {
            incs ++;
        }
    }
    
    if(decs != 0 && incs != 0)
    {
        return false;
    }
    
    return true;
}

/*
Runtime: 84 ms, faster than 23.68% of C online submissions for Monotonic Array.
Memory Usage: 9.2 MB, less than 100.00% of C online submissions for Monotonic Array.
*/

bool isMonotonic(int* A, int ASize){
    
    if(ASize == 1)
    {
        return true;
    }
    
    int incs = 0;
    int decs = 0;
    for(int i = 1; i < ASize; i++)
    {
        if(A[i] < A[i-1])
        {
            decs ++;
            if(incs != 0)
            {
                return false;
            }
        }
        else if (A[i] > A[i-1])
        {
            incs ++;
            if(decs != 0)
            {
                return false;
            }
        }
    }
    
    return true;
}
