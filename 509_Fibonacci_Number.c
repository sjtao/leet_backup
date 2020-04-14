/*
Runtime: 12 ms, faster than 30.33% of C online submissions for Fibonacci Number.
Memory Usage: 5.2 MB, less than 100.00% of C online submissions for Fibonacci Number.
*/

int fib(int N){

    int result;
    
    if (N <= 1)
    {
        result = N;
    }
    
    else
        result = fib(N-1) + fib(N-2);
    
    return result;
}

/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Fibonacci Number.
Memory Usage: 5 MB, less than 100.00% of C online submissions for Fibonacci Number.
*/

int fib(int N){

    int result[31] = {0};
    
    result[1] = 1;
    
    if(N <= 1)
    {
        return result[N];
    }
    
    for(int i = 2; i < N+1; i++)
    {
        result[i] = result[i-1] + result[i-2];
    }
    
    return result[N];
}
