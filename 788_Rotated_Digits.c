/*
Runtime: 24 ms, faster than 9.52% of C online submissions for Rotated Digits.
Memory Usage: 14.4 MB, less than 100.00% of C online submissions for Rotated Digits.
*/

int digit(int S)
{
    int a;
    int r = 1;
    int *d = calloc(10, sizeof(int));
    while (S > 0)
    {
        a = S % 10;
        d[a]++;
        S = S/10;
    }
    
    if(d[3] != 0 || d[4] != 0 || d[7] != 0) //347
    {
        r = 0;
    }
    if(d[2] == 0 && d[5] == 0 && d[6] == 0 && d[9] == 0) //2569
    {
        r = 0;
    }
    
    return r;
}

int rotatedDigits(int N){
    
    int i;
    int count = 0;
    for(i = 1; i <= N; i++)
    {
        count += digit(i);
    }
    return count;
}
