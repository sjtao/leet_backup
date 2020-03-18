int maxCount(int m, int n, int** ops, int opsSize, int* opsColSize){

    if(opsSize == 0)
        return m*n;
    
    int i;
    int min_a = ops[0][0];
    int min_b = ops[0][1];
    
    for(i = 1; i < opsSize; i++)
    {
        if(min_a > ops[i][0])
            min_a = ops[i][0];
        if(min_b > ops[i][1])
            min_b = ops[i][1];
    }
    
    return min_a * min_b;
}
