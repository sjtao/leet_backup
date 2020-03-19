

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* powerfulIntegers(int x, int y, int bound, int* returnSize){

    if(bound < 2)
    {
        *returnSize = 0;
        return;
    }
    
    int xlim = x > 1 ? floor(log10(bound)/log10(x))+2 : 2;
    int ylim = y > 1 ? floor(log10(bound)/log10(y))+2 : 2;
    int *n = calloc(xlim*ylim, sizeof(int));
    int temp;
    int i, j;
    int k = 0;
    
    for (i = 0; i < xlim; i ++)
    {
        for (j = 0; j < ylim; j ++)
        {
            temp = pow(x, i) + pow(y, j);
            if(temp <= bound)
            {
                n[k] = temp;
                k ++;
            }
            else
            {
                break;
            }
        }
    }
    
    for(i = 0; i < k-1; i ++)
    {
        for(j = i+1; j < k; j++)
        {
            if(n[i] < n[j])
            {
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
            else if(n[i] == n[j])
            {
                n[j] = 0;
            }
        }
    }
    
    int nonzeros = 0;
    while(n[nonzeros] != 0)
    {
        nonzeros ++;
    }    
    
    * returnSize = nonzeros;
    
    return n;
}

