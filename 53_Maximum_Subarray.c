/*
Runtime: 284 ms, faster than 9.39% of C online submissions for Maximum Subarray.
Memory Usage: 6.1 MB, less than 100.00% of C online submissions for Maximum Subarray.
*/

int maxSubArray(int* nums, int numsSize){
    
    int max = -pow(2, 32);
    int local;
    int i, j;
    for(i = 0; i < numsSize; i++)
    {
        local = nums[i];
        if(max < local)
        {
            max = local;
        }
        for(j = i+1; j < numsSize; j++)
        {
            local += nums[j];
            if(max < local)
            {
                max = local;
            }
        }
    }
    return max;
}

