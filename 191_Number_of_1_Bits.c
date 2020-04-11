/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Number of 1 Bits.
Memory Usage: 5.2 MB, less than 100.00% of C online submissions for Number of 1 Bits.
*/


int hammingWeight(uint32_t n) {
    
    int cnt = 0;
    
    while(n != 0)
    {
        cnt ++;
        n &= (n-1);
    }
    
    return cnt;
}
