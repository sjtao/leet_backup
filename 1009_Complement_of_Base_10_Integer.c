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

/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Complement of Base 10 Integer.
Memory Usage: 5.2 MB, less than 100.00% of C online submissions for Complement of Base 10 Integer.
*/

int bitwiseComplement(int N){
    
    if(N == 0)
    {
        return 1;
    }
    
    int binary[32]={0};
    int i = 0;
    
    while(N > 0)
    {
        binary[i] = ((N % 2)^1); //0 XOR 1 = 1, 1 XOR 1 = 0
        N /= 2;
        i++;
    }
    
    int complement = 0;
    for(int j = i-1; j >= 0; j--)
    {
        complement = complement * 2 + binary[j];
    }
    
    return complement;

}
