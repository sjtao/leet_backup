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

//
int missingNumber(int* nums, int numsSize){
    
    int i;
    int sn = numsSize * (numsSize + 1)/2;
    
    for (i = 0; i < numsSize; i++)
    {
        sn -= nums[i];
    }
    
    return sn;
}
