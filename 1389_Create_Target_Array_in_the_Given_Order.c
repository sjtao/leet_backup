/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Create Target Array in the Given Order.
Memory Usage: 5.9 MB, less than 100.00% of C online submissions for Create Target Array in the Given Order.
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize){
    
    int *target = calloc(numsSize, sizeof(int));
    
    for(int i = 0; i < indexSize; i++)
    {
        for(int j = numsSize - 1; j > index[i]; j--)
        {
            target[j] = target[j-1];
        }
        target[index[i]] = nums[i];
    }
    
    *returnSize = numsSize;
    return target;
}

