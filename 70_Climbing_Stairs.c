/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Climbing Stairs.
Memory Usage: 5.5 MB, less than 100.00% of C online submissions for Climbing Stairs.
*/

int climbStairs(int n){
    
    if(n <= 2)
    {
        return n;
    }
    
    int *step = malloc((n+1) * sizeof(int));
    step[0] = 0;
    step[1] = 1;
    step[2] = 2;
    
    for(int i = 3; i < n+1; i++)
    {
        step[i] = step[i-1] + step[i-2]; //Fibonacci Number
    }
    
    return step[n];

}
