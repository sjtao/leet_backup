/*
Runtime: 8 ms, faster than 93.59% of C online submissions for Minimum Subsequence in Non-Increasing Order.
Memory Usage: 6.2 MB, less than 100.00% of C online submissions for Minimum Subsequence in Non-Increasing Order.
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int* minSubsequence(int* nums, int numsSize, int* returnSize){

    int i;
    int sum = 0;
    
    qsort(nums, numsSize, sizeof(int), cmpfunc);
    
    for(i = 0; i < numsSize; i++)
    {
        sum += nums[i];
    }
    
    int mid = 0;
    int *sub = malloc(numsSize * sizeof(int));
    
    for(i = 0; i < numsSize; i++)
    {
        mid += nums[numsSize -1 - i];
        sub[i] = nums[numsSize -1 - i];
        
        if(2*mid > sum)
        {
            break;
        }
    }
    
    *returnSize = i+1;
    return sub;
}

//similar performance
int* minSubsequence(int* nums, int numsSize, int* returnSize){

    int i;
    int sum = 0;
    int mid = 0;
    int *sub = malloc(numsSize * sizeof(int));
    
    qsort(nums, numsSize, sizeof(int), cmpfunc);
    
    for(i = 0; i < numsSize; i++)
    {
        sum += nums[i];
    }
    
    for(i = 0; i < numsSize; i++)
    {
        mid += nums[numsSize -1 - i];
        sum -= nums[numsSize -1 - i];
        sub[i] = nums[numsSize -1 - i];
        
        if(mid > sum)
        {
            break;
        }
    }
    
    *returnSize = i+1;
    return sub;
}
