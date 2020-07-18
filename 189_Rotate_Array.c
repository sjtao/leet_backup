/*
Runtime: 12 ms, faster than 91.25% of C online submissions for Rotate Array.
Memory Usage: 7.5 MB, less than 28.85% of C online submissions for Rotate Array.
*/

void rotate(int* nums, int numsSize, int k){
    
    if( k % numsSize == 0)
    {
        return;
    }
    
    int d = numsSize - k % numsSize;
    int *temp;
    temp = malloc(numsSize * sizeof(int));
    
    int i, index = 0;
    for(i = d; i < numsSize; i++)
    {
        temp[index++] = nums[i];
    }
    for(i = 0; i < d; i++)
    {
        temp[index++] = nums[i];
    }
    
    for(i = 0; i < numsSize; i++)
    {
        nums[i] = temp[i];
    }
    
    return;
}
