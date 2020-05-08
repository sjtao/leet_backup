
/*
Runtime: 4 ms, faster than 76.41% of C online submissions for Search in Rotated Sorted Array.
Memory Usage: 5.8 MB, less than 100.00% of C online submissions for Search in Rotated Sorted Array.
*/

int search(int* nums, int numsSize, int target){

    
    if (numsSize < 1)
        return -1;
    
    bool s = (target >= nums[0]);
    int i;
    
    if(s)
    {
        for(i = 0; i < numsSize; i++)
        {
            if(target == nums[i])
            {
                return i;
            }
        }
    }
    else
    {
        for(i = numsSize-1; i >= 0; i--)
        {
            if(target == nums[i])
            {
                return i;
            }
        }
    }
    
    return -1;
}
