int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){

    //numsSize = sizeof(nums) / sizeof(nums[0]);
    *returnSize = numsSize;

    int *number = malloc(numsSize*sizeof(int));
    
    int i, j;
    
    for (i = 0; i < numsSize; i++)
    {
        number[i] = 0;
    }
    
    for (i = 0; i < numsSize - 1; i++)
    {
        for (j = i+1; j < numsSize; j++)
        {
            if(nums[i] > nums[j])
            {
                number[i] += 1;
            }
            
            else if (nums[i] < nums[j])
            {
                number[j] += 1;
            }
        }
    }
    
    return number;
}
