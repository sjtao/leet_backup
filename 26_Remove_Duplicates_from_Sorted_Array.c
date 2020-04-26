/*
Runtime: 36 ms, faster than 11.58% of C online submissions for Remove Duplicates from Sorted Array.
Memory Usage: 7.9 MB, less than 100.00% of C online submissions for Remove Duplicates from Sorted Array.
*/

int removeDuplicates(int* nums, int numsSize){
    
    if(numsSize == 0 || numsSize == 1)
    {
        return numsSize;
    }
    
    int i = 0, j = 0;
    
    for(i = 0; i < numsSize-1; i++)
    {
        if(nums[i] != nums[i+1])
        {
            nums[j++] = nums[i];
        }
    }
    
    nums[j++] = nums[numsSize-1];
        
    return j;
}
