bool isPowerOfTwo(int n){
    bool Power = 0;
    double m;
    int k;
    
    if(n == 0)
    {
        return 0;
    }
    
    m = log10(n)/log10(2);
    k = (int)m;
    
    if(m == k)
        Power = 1;
    
    return Power;       
        
}
