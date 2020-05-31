/*
Runtime: 0 ms, faster than 100.00% of C online submissions for House Robber.
Memory Usage: 5.6 MB, less than 100.00% of C online submissions for House Robber
*/

int max(int a, int b)
{
    return a >= b ? a : b;
}

int rob(int* nums, int numsSize){

    if(numsSize == 0)
    {
        return 0;
    }
    
    if(numsSize == 1)
    {
        return nums[0];
    }
    
    int a = nums[0];
    int b = max(nums[0], nums[1]);
    
    for(int i=2; i < numsSize; i++)
    {
        int x = max(b, a+nums[i]);
        a = b;
        b = x;
    }
    
    return b;
}
