/*
Runtime: 12 ms, faster than 5.36% of C online submissions for Longest Continuous Increasing Subsequence.
Memory Usage: 6 MB, less than 100.00% of C online submissions for Longest Continuous Increasing Subsequence.
*/



int findLengthOfLCIS(int* nums, int numsSize){
    
    if(numsSize <= 1)
    {
        return numsSize;
    }
    
    int i;
    int max = 0;
    int cnt = 1;
    
    for(i = 1; i < numsSize; i++)
    {
        if(nums[i-1] < nums[i])
        {
            cnt ++;
        }
        else
        {
            max = max > cnt ? max : cnt;
            cnt = 1;
        }
    }   

    max = max > cnt ? max : cnt;
    
    return max;
    
}

