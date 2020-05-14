/*
Runtime: 40 ms, faster than 24.47% of C online submissions for Sort Integers by The Number of 1 Bits.
Memory Usage: 8.5 MB, less than 100.00% of C online submissions for Sort Integers by The Number of 1 Bits.
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int count(int m)
{
    int bit = 0;
    while(m)
    {
        bit += (m&1);
        m >>= 1;
    }
    return bit;
}

int* sortByBits(int* arr, int arrSize, int* returnSize){
    
    int *sort = malloc(arrSize * sizeof(int));
    int **bits = malloc(arrSize * sizeof(int*));
    
    int i, j;
    int temp0, temp1;
    
    for(i = 0; i < arrSize; i++)
    {
        bits[i] = malloc(2 * sizeof(int*));
        bits[i][0] = count(arr[i]);
        bits[i][1] = arr[i];
    }
    
    for(i = 0; i < arrSize; i++)
    {
        for(j = i+1; j < arrSize; j++)
        {
            if(bits[i][0] > bits[j][0])
            {
                temp0 = bits[i][0];
                temp1 = bits[i][1];
                bits[i][0] = bits[j][0];
                bits[i][1] = bits[j][1];
                bits[j][0] = temp0;
                bits[j][1] = temp1;
            }
            if(bits[i][0] == bits[j][0] && bits[i][1] > bits[j][1])
            {
                temp0 = bits[i][1];
                bits[i][1] = bits[j][1];
                bits[j][1] = temp0;
            }
        }
    }
    
    for(i = 0; i < arrSize; i++)
    {
        sort[i] = bits[i][1];
    }
    
    *returnSize = arrSize;
    return sort;
}
