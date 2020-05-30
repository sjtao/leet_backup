/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Sum of Two Integers.
Memory Usage: 5.2 MB, less than 100.00% of C online submissions for Sum of Two Integers.
*/


int getSum(int a, int b){
    
    if(a == 0) return b;
    if(b == 0) return a;
    
    unsigned int carry;
    
    while (b)
    {
        carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    
    return a;
}
