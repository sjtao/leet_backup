/*
Runtime: 44 ms, faster than 94.25% of C online submissions for Product of Array Except Self.
Memory Usage: 14 MB, less than 100.00% of C online submissions for Product of Array Except Self.
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//Note: Please solve it without division and in O(n)!
int* productExceptSelf(int* nums, int numsSize, int* returnSize){ 
    
    *returnSize = numsSize;
    
    if(numsSize < 2)
    {
        return nums;
    }
    
    int *prod = malloc(numsSize * sizeof(int));
    int *left = malloc(numsSize * sizeof(int));
    int *right = malloc(numsSize * sizeof(int));
    
    left[0] = 1;
    right[numsSize-1] = 1;
    
    int i;
    for(i = 1; i < numsSize; i++)
    {
        left[i] = left[i-1] * nums[i-1];
        right[numsSize-1-i] = right[numsSize-i] * nums[numsSize-i];
    }
    
    for(i=0; i<numsSize; i++)
    {
        prod[i] = left[i]*right[i];
    }
    
    return prod;
    
}
