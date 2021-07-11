/*
Runtime: 36 ms, faster than 90.40% of C online submissions for Build Array from Permutation.
Memory Usage: 10.3 MB, less than 13.60% of C online submissions for Build Array from Permutation.
*/

int* buildArray(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int *ans = malloc(numsSize * sizeof(int));
    int i;
    for (i = 0; i < numsSize; i++)
    {
        ans[i] = nums[nums[i]];
    }
    return ans;
}
