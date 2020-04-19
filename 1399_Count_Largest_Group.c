/*
Runtime: 4 ms, faster than 48.28% of C online submissions for Count Largest Group.
Memory Usage: 7.3 MB, less than 100.00% of C online submissions for Count Largest Group.
*/

int digitsum(int a)
{
    if( a < 10)
    {
        return a;
    }
    
    int sum = 0;
    while(a > 0)
    {
        sum += a % 10;
        a /= 10;
    }
    
    return sum;
}

int countLargestGroup(int n){
    
    if(n < 10)
    {
        return n;
    }
    
    int *digit = malloc((n+1) * sizeof(int));
    int *count = calloc(n+1, sizeof(int));
    int *digit_count = calloc(n+1, sizeof(int));
    
    int i;
    for(i = 0; i < n+1; i++)
    {
        digit[i] = digitsum(i);
    }
    
    for(i = 0; i < n+1; i++)
    {
        count[digit[i]]++;
    }
    
    int max = count[1];
    for(i = 2; i < n+1; i++)
    {
        if(max < count[i])
        {
            max =count[i];
        }
    }
    
    for(i = 0; i < n+1; i++)
    {
        digit_count[count[i]]++;
    }
    
    return digit_count[max];
}

