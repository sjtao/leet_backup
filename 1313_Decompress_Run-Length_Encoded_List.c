/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/*
Runtime: 32 ms, faster than 75.04% of C online submissions for Decompress Run-Length Encoded List.
Memory Usage: 10.1 MB, less than 100.00% of C online submissions for Decompress Run-Length Encoded List.
*/
int* decompressRLElist(int* nums, int numsSize, int* returnSize){

    int i, j;
    int tot_freq = 0;
    for (i = 0; i<numsSize; i=i+2)
    {
        tot_freq += nums[i];
    }
    
    *returnSize = tot_freq;
    
    int *list = malloc(tot_freq * sizeof(int));
    
    for(j=0; j<nums[0]; j++)
    {
        list[j] = nums[1];
    }
    int num =nums[0];
    int num_o; 
    for (i=2; i<numsSize; i=i+2)
    {
        num_o = num;
        num += nums[i];
        for(j = num_o; j<num; j++)
        {
            list[j] = nums[i+1];
        }
    }
    
    return list;
}

/*
Runtime: 28 ms, faster than 94.47% of C online submissions for Decompress Run-Length Encoded List.
Memory Usage: 10.3 MB, less than 100.00% of C online submissions for Decompress Run-Length Encoded List.
*/

int* decompressRLElist(int* nums, int numsSize, int* returnSize){

    int i, j;
    int *list = malloc(100*100 * sizeof(int));
    *returnSize = 0;
    
    for(i = 0; i<numsSize; i=i+2)
    {
        for(j = 0; j < nums[i]; j++)
        {
            list[(*returnSize)++]=nums[i+1];
        }
    }
    
    return list;
}
