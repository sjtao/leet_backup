/*
Runtime: 24 ms, faster than 92.20% of C online submissions for Sort Array By Parity.
Memory Usage: 8.9 MB, less than 100.00% of C online submissions for Sort Array By Parity.
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* A, int ASize, int* returnSize){
    int *array = malloc(ASize*sizeof(int));
    int n_even = 0;
    int n_odd = ASize-1;
    
    for(int i = 0; i < ASize; i++)
    {
        if (A[i] % 2 == 0)
        {
            array[n_even] = A[i];
            n_even ++;
        }
        else
        {
            array[n_odd] = A[i];
            n_odd --;
        }
    }
    
    *returnSize = ASize;
    
    return array;
}

