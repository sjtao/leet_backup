/*
Runtime: 4 ms, faster than 84.32% of C online submissions for Search Insert Position.
Memory Usage: 5.5 MB, less than 100.00% of C online submissions for Search Insert Position.
*/

int searchInsert(int* nums, int numsSize, int target){

    if(target > nums[numsSize-1])
    {
        return numsSize;
    }
    else if(target < nums[0])
    {
        return 0;
    }
    
    int  insert = 0;
    for(int i = 0; i < numsSize; i++)
    {
        if(target <= nums[i])
        {
            insert = i;
            break;
        }
    }
    return insert;
}
