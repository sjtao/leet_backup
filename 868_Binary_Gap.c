

int binaryGap(int N){

    int ones[31] = {0};
    int i = 0;
    int lim = 0;
    while(N > 0)
    {
        if (N % 2 == 1)
        {
            ones[lim] = i;
            lim += 1;
        }
        i += 1;
        N = N / 2;
    }
    
    
    if(lim < 2)
    {
        return 0;
    }
    
    int max = ones[1] - ones[0];
    for(i = 2; i < lim; i++)
    {
        if (max < ones[i] -ones[i-1])
        {
            max = ones[i] -ones[i-1];
        }
    }
    return max;
}

