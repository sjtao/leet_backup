int trailingZeroes(int n){
    
    int zeros = 0;
    
    while (n > 0)
    {
        n = n/5;
        zeros += n; 
    }
    
    return zeros;
}
