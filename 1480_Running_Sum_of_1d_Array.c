/*
Runtime: 8 ms, faster than 68.75% of C online submissions for Running Sum of 1d Array.
Memory Usage: 6.7 MB, less than 86.79% of C online submissions for Running Sum of 1d Array.
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int *Sum = (int*)malloc(numsSize * sizeof(int));
    int sum = nums[0];
    Sum[0] = sum;
    int i;
    for(i = 1; i < numsSize; i++)
    {
        sum += nums[i];
        Sum[i] = sum;
    }
    return Sum;
}

/*
Runtime: 8 ms, faster than 68.75% of C online submissions for Running Sum of 1d Array.
Memory Usage: 6.8 MB, less than 62.26% of C online submissions for Running Sum of 1d Array.
*/
int* runningSum(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int *Sum = (int*)malloc(numsSize * sizeof(int));
    Sum[0] = nums[0];
    int i;
    for(i = 1; i < numsSize; i++)
    {
        Sum[i] = Sum[i-1] + nums[i];
    }
    return Sum;
}
