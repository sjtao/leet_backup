/*
Runtime: 44 ms, faster than 13.16% of C online submissions for Prime Number of Set Bits in Binary Representation.
Memory Usage: 5.1 MB, less than 100.00% of C online submissions for Prime Number of Set Bits in Binary Representation.
*/

int countone(int m)
{
    int count = 0;
    
    while(m != 0)
    {
        if(m%2 != 0)
        {
            count++;
        }
        m >>= 1;
    }
    
    return count;
}

bool prime(int m)
{
    if(m < 2)
    {
        return 0;
    }
    
    for(int i = 2; i < m/2+1; i++)
    {
        if (m%i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}

int countPrimeSetBits(int L, int R){
    
    int primecount = 0;
    
    for(int i = L; i <= R; i++)
    {
        primecount += prime(countone(i));
    }
    
    return primecount;
}

/*
Runtime: 4 ms, faster than 100.00% of C online submissions for Prime Number of Set Bits in Binary Representation.
Memory Usage: 5 MB, less than 100.00% of C online submissions for Prime Number of Set Bits in Binary Representation.
*/
int countone(int m)
{
    int count = 0;
    
    while(m != 0)
    {
        m = m&(m-1);
        count++;
    }
    
    return count;
}

bool prime(int m)
{
    if(m < 2)
    {
        return 0;
    }
    
    for(int i = 2; i*i<= m; i++)
    {
        if (m%i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}

int countPrimeSetBits(int L, int R){
    
    int primecount = 0;
    
    for(int i = L; i <= R; i++)
    {
        primecount += prime(countone(i));
    }
    
    return primecount;
}
