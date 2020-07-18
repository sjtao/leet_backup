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

/*
Runtime: 640 ms, faster than 5.78% of C online submissions for Rotate Array.
Memory Usage: 7.2 MB, less than 89.74% of C online submissions for Rotate Array.
*/
void swap(int c, int numsSize, int* nums)
{
    int i, temp;
    temp = nums[numsSize-1];
    for(i = numsSize - 1; i > 0; i--)
    {
        nums[i] = nums[i-1];
    }
    nums[i] = temp;
    
    return;
}

void rotate(int* nums, int numsSize, int k){
    
    if( k % numsSize == 0)
    {
        return;
    }
    
    k = k % numsSize;
    int c = 0;
    while (c < k)
    {
        swap(c, numsSize, nums);
        c++;
    }
    
    return;
}

/*
Runtime: 8 ms, faster than 99.22% of C online submissions for Rotate Array.
Memory Usage: 7.5 MB, less than 13.46% of C online submissions for Rotate Array.
*/
void rotate(int* nums, int numsSize, int k){
    
    if( k % numsSize == 0)
    {
        return;
    }
    
    k = k % numsSize;
    int current, next, prev, temp;
    int i, count = 0;
    for(i = 0; count < numsSize; i ++)
    {
        prev = nums[i];
        current = i;
        do
        {
            next = (current + k) % numsSize;
            temp = nums[next];
            nums[next] = prev;
            prev = temp;
            current = next;
            count ++;
        }while(i!=current);
    }
 
    return;
}
