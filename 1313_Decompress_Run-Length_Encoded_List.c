/**
 * Note: The returned array must be malloced, assume caller calls free().
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
