/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Binary Number with Alternating Bits.
Memory Usage: 5.1 MB, less than 100.00% of C online submissions for Binary Number with Alternating Bits.
*/


bool hasAlternatingBits(int n){
    
    long int num = n ^ (n >> 1);
    
    if (((num + 1) & num) == 0)
        return 1;
    else
        return 0;
    
    return;
}
