bool containNOzero(int a)
{
    int count = 0;
    while(a > 0)
    {
        if (a %10 == 0)
            count += 1;
        
        a = a/10;
    }
    
    return (count == 0);
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getNoZeroIntegers(int n, int* returnSize){

    * returnSize = 2;
    
    int * intg = malloc(2*sizeof(int));
    
    int i = 1;
    
    while(i <= n/2)
    {
        intg[0] = i;
        intg[1] = n - i;
        
        if (containNOzero(intg[0]) == 1 && containNOzero(intg[1]) == 1)
        {
            break;
        }
        else
        {
            i++;
        }
    }
    
    return intg;   
    
}

