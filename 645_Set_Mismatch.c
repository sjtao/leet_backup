

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
 //straightforward: searching; super slow;
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

// faster than 95.83% of C online submissions for Set Mismatch
int* findErrorNums(int* nums, int numsSize, int* returnSize){

    * returnSize = 2;
    int *array = malloc(2 * sizeof(int));
    int *count = calloc(numsSize+1, sizeof(int));
    
    //array[0]: duplicate
    //array[1]: miss
    
    int i, j;
    for(i = 0; i < numsSize; i++)
    {
        count[nums[i]] ++;
    }
    
    for(i = 1; i < numsSize+1; i++)
    {
        if(count[i] == 0)
            array[1] = i;
        else if (count[i] == 2)
            array[0] = i;
    }
    
    return array;    
}

