

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
 //straightforward: searching
int* findErrorNums(int* nums, int numsSize, int* returnSize){

    * returnSize = 2;
    int *array = malloc(2 * sizeof(int));
    
    //array[0]: duplicate
    //array[1]: miss
    
    int i, j;
    for(i = 0; i < numsSize; i++)
    {
        for (j = i+1; j < numsSize; j++)
        {
            if(nums[i] == nums[j])
            {
                array[0] = nums[j];
                nums[j] = 0;
                break;
            }
        }
    }
    
    int sum_n = numsSize * (numsSize + 1)/2;
    int sum = 0;
    for(i = 0; i < numsSize; i++)
    {
        sum += nums[i];
    }
    
    array[1] = sum_n - sum;
    
    return array;    
}

