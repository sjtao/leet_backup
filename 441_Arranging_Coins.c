

int arrangeCoins(int n){
/*    
    long int k = floor(sqrt(n));
    int staircase;
    
    while (true)
    {
        long int k1 = (k*k+k)/2;
        long int k2 = n - k1;
        if (k2 < k+1)
        {
            staircase = k;
            break;
        }
        else
        {
            k ++;
        }
    }
    
    return staircase;
 */
    
    long int k = floor(sqrt(n));
    long int i;
    long int temp;
    for (i = k; i <= n; i++)
    {
        temp = i * (i+1)/2;
        if(temp > n)
        {
            k = i - 1;
            break;
        }
    }
    return k;
}

