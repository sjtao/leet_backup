/*
Runtime: 12 ms, faster than 30.33% of C online submissions for Fibonacci Number.
Memory Usage: 5.2 MB, less than 100.00% of C online submissions for Fibonacci Number.
*/

int fib(int N){

    int result;
    
    if (N == 0)
    {
        result = 0;
    }
    
    else if(N == 1)
    {
        result = 1;
    }
    
    else
        result = fib(N-1) + fib(N-2);
    
    return result;
}
