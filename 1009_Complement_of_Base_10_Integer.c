int bitwiseComplement(int N){

    int bn = 0;
    int r;
    
    int i = 0;
    if(N == 0)
    {
        return 1;
    }
    while (N > 0)
    {
        r = N % 2;
        if (r == 0)
        {
            bn += 1 * pow(2, i);
        }        
        
        N = N/2;
        i += 1;
    }
    
    return bn;
    
}
