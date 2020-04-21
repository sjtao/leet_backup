/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Plus One.
Memory Usage: 5.6 MB, less than 100.00% of C online submissions for Plus One.
*/



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){

    int *plus = malloc((digitsSize+1)*sizeof(int));
    int i;
    
    digits[digitsSize-1] += 1;
    
    for(i = digitsSize-1; i > 0; i--)
    {
        digits[i-1] += digits[i]/10;
        digits[i] %= 10;
    }
    
    if(digits[0] > 9)
    {
        plus[0] = digits[0]/10;
        plus[1] = digits[0]%10;
        for(i = 2; i < digitsSize+1; i++)
        {
           plus[i] = digits[i-1]; 
        }
        
        *returnSize = digitsSize+1;
    }
    else
    { 
        for(i = 0; i < digitsSize; i++)
        {
            plus[i] = digits[i];
        }
        *returnSize = digitsSize;
    }
    
    return plus;
}

