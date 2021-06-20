/*
Runtime: 4 ms, faster than 92.42% of C online submissions for Maximum Product of Two Elements in an Array.
Memory Usage: 6.2 MB, less than 23.48% of C online submissions for Maximum Product of Two Elements in an Array.
*/

int maxProduct(int* nums, int numsSize){
    int i, max = 0, maxidx, smax = 0;
    for(i = 0; i < numsSize; i++)
    {
       if( max < nums[i])
       {
           max = nums[i];
           maxidx = i;
       }
    }
    
    for(i = 0; i < numsSize; i++)
    {
        if(i != maxidx)
        {
            if(smax < nums[i]) smax = nums[i];
        }
    }
    int result = (max-1)*(smax-1);
    return result;
}
