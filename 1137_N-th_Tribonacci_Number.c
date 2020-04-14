/*
Runtime: 0 ms, faster than 100.00% of C online submissions for N-th Tribonacci Number.
Memory Usage: 5.1 MB, less than 100.00% of C online submissions for N-th Tribonacci Number.
*/


int tribonacci(int n){
    
    int result[38] = {0};
    
    result[1] = 1;
    result[2] = 1;
    
    if(n <= 2)
    {
        return result[n];
    }
    
    for(int i = 3; i <= n; i++)
    {
        result[i] = result[i-1] + result[i-2] + result[i-3];
    }
    
    return result[n];
}
