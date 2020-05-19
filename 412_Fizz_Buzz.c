/*
Runtime: 8 ms, faster than 80.54% of C online submissions for Fizz Buzz.
Memory Usage: 6.6 MB, less than 100.00% of C online submissions for Fizz Buzz.
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** fizzBuzz(int n, int* returnSize){
    
    char **f = malloc(n * sizeof(char*));
    
    int i,j;
    for(i = 0; i < n; i++)
    {
        f[i] = malloc(10 * sizeof(char));
        if((i+1)%3 == 0)
        {
            if((i+1)%5 == 0)
            {
                f[i][0] = 'F';
                f[i][1] = 'i';
                f[i][2] = 'z';
                f[i][3] = 'z';
                f[i][4] = 'B';
                f[i][5] = 'u';
                f[i][6] = 'z';
                f[i][7] = 'z';
                f[i][8] = '\0';
            }
            else
            {
                f[i][0] = 'F';
                f[i][1] = 'i';
                f[i][2] = 'z';
                f[i][3] = 'z';
                f[i][4] = '\0';
            }
        }
        else if((i+1)%5 == 0)
        {
            f[i][0] = 'B';
            f[i][1] = 'u';
            f[i][2] = 'z';
            f[i][3] = 'z';
            f[i][4] = '\0';
        }
        else
        {
            sprintf(f[i], "%d", i+1);
        }
    }
    
    *returnSize = n;
    return f;
}
