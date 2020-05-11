/*
Runtime: 20 ms, faster than 14.66% of C online submissions for Bitwise AND of Numbers Range.
Memory Usage: 5.4 MB, less than 100.00% of C online submissions for Bitwise AND of Numbers Range.
*/

//find the common binary digits of all values in range
int rangeBitwiseAnd(int m, int n){
    
    int i = 0;
    while(m!=n)
    {
        m >>= 1;
        n >>= 1;
        i++;
    }

    return m << i;
}

/*
Runtime: 16 ms, faster than 20.67% of C online submissions for Bitwise AND of Numbers Range.
Memory Usage: 5.5 MB, less than 100.00% of C online submissions for Bitwise AND of Numbers Range.
*/
int rangeBitwiseAnd(int m, int n){
    
    while (m < n) 
    {
       n = n & (n-1);
    }
    
    return m&n;
}
