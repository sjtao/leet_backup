/*
Runtime: 20 ms, faster than 29.41% of C online submissions for Move Zeroes.
Memory Usage: 7.5 MB, less than 100.00% of C online submissions for Move Zeroes.
*/

void moveZeroes(int* nums, int numsSize){

    int i, j;
    int temp;
    
    for(i = 0; i < numsSize; i++)
    {
        if(nums[i] == 0)
        {
            for(j = i+1; j < numsSize; j++)
            {
                if(nums[j] != 0)
                {
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                    break;
                }
            }
        }
    }
    
    return nums;
    
}

/*
Runtime: 12 ms, faster than 86.15% of C online submissions for Move Zeroes.
Memory Usage: 7.3 MB, less than 100.00% of C online submissions for Move Zeroes.
*/

void moveZeroes(int* nums, int numsSize){

    if(numsSize < 2)
    {
        return;
    }
    
    int i = 0, j = 0;
    int temp;
    
    while(i < numsSize)
    {
        if(nums[i] == 0)
            i++;
        else
        {
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j++;
        }
    }
    
    return;
    
}
