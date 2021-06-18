/*
Runtime: 12 ms, faster than 90.32% of C online submissions for Shuffle the Array.
Memory Usage: 7 MB, less than 97.67% of C online submissions for Shuffle the Array.
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    
    *returnSize = numsSize;
    int* shuffle = (int*)malloc(numsSize * sizeof(int));
    int i;
    for(i = 0; i < n; i++)
    {
        shuffle[2*i] = nums[i];
        shuffle[2*i+1] = nums[i+n];
    }
    return shuffle;

}
