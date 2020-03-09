

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

bool divid(int num)
{
    int n = num;
    int i, a;
    int result = true;
    
    while (n != 0)
    {
        a = n % 10;
        n = n / 10;
        
        if (a == 0 || (a != 0 && num % a != 0))
        {
            result = false;
            break;
        }
    }
    return result;
}

int* selfDividingNumbers(int left, int right, int* returnSize){
    int i, k;
    
    int size = right - left + 1;
    int *list = malloc(size * sizeof(int));
    bool div = true;
    
    k = 0;
    for (i = left; i <= right; i++)
    {
        if(i % 10 != 0)
        {
            div = divid(i);
            if (div == true)
            {
                list[k] = i;
                k += 1;
            }  
        }
                
    }
    
    *returnSize = k;
    int * result = malloc(k * sizeof(int));
    for (i = 0; i < k; i++)
    {
        result[i] = list[i];
    }
    
    return result;    
    
}

