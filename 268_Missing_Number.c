int missingNumber(int* nums, int numsSize){
    
    int i;
    int sn = numsSize;
    
    for (i = 0; i < numsSize; i++)
    {
        sn += (i - nums[i]);
    }
    
    return sn;
}

//bit manipulation
int missingNumber(int* nums, int numsSize){
    
    int i;
    int sn = numsSize;
    
    for (i = 0; i < numsSize; i++)
    {
        sn ^= (i ^ nums[i]);
    }
    
    return sn;
}
