/*
Runtime: 520 ms, faster than 7.14% of C online submissions for Replace Elements with Greatest Element on Right Side.
Memory Usage: 12 MB, less than 100.00% of C online submissions for Replace Elements with Greatest Element on Right Side.
*/

int* replaceElements(int* arr, int arrSize, int* returnSize){
    int i, j;
    int k = 0;
    for(i = 0; i < arrSize-1; i++)
    {
        arr[k] = arr[i+1];
        for(j = i+2; j < arrSize; j++)
        {
            if(arr[j] > arr[k])
            {
                arr[k] = arr[j];
            }
        }
        k += 1;
    }
    arr[k] = -1;
    *returnSize = k+1;
    
    return arr;
}

/*
Runtime: 52 ms, faster than 79.22% of C online submissions for Replace Elements with Greatest Element on Right Side.
Memory Usage: 12 MB, less than 100.00% of C online submissions for Replace Elements with Greatest Element on Right Side.
*/
int* replaceElements(int* arr, int arrSize, int* returnSize){
    int i, j, k=0;;
    for(i = 0; i < arrSize-1; i++)
    {
        arr[i] = arr[i+1];
        if(k <= i+1)
        {
            for(j = i+2; j < arrSize; j++)
            {
                if(arr[j] > arr[i])
                {
                    arr[i] = arr[j];
                    k = j;
                }
            }
        }
        else
        {
            arr[i] = arr[k];
        }
            
    }
    arr[arrSize-1] = -1;
    
    *returnSize = arrSize;
    
    return arr;
}
