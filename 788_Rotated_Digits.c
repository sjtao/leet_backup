/*
Runtime: 4 ms, faster than 33.33% of C online submissions for Rotated Digits.
Memory Usage: 5.3 MB, less than 100.00% of C online submissions for Rotated Digits.
*/

int digit(int S)
{
    int a;
    int c = 0;
    while (S > 0)
    {
        a = S % 10;
        if(a == 3 || a == 4 || a == 7) //347
        {
            return 0;
        }
        if(a == 2 || a == 5 || a == 6 || a == 9)
        {
            c++;
        }
        S = S/10;
    }
    
    return c > 0 ? 1 : 0;
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
