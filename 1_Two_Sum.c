

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int *indices = (int*) malloc(2*sizeof(int));
    *returnSize = 2;
    
    int i, j;
    int second_nums;
    
    for (i = 0; i < numsSize; i++)
    {
        second_nums = target - nums[i];
        for (j = i+1; j < numsSize; j++)
        {
            if (nums[j] == second_nums)
            {
                indices[0] = i;
                indices[1] = j;
                break;
            }     
        }  
    }
    return indices;
}

