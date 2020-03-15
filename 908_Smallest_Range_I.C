int smallestRangeI(int* A, int ASize, int K){

    int diff;
    int i, j;
    
    int min = A[0];
    int max = A[0];
    
    for (i = 1; i < ASize; i++)
    {
        if(min > A[i])
            min = A[i];
        if(max < A[i])
            max = A[i];
    }
    
    diff = max - min - 2*K > 0 ? max - min - 2*K : 0;
    
    return diff;
}
