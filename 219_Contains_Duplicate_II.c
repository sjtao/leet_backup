//passed all tests time limit exceed

#define MIN(x, y) (((x) < (y)) ? (x) : (y))

bool containsNearbyDuplicate(int* nums, int numsSize, int k){

    int i, j;
    
    if(numsSize < 2 || k < 1)
    {
        return false;
    }
    
    for(i= 0; i < numsSize-1; i++)
    {
        for(j = i+1; j <= MIN(i+k, numsSize-1); j++)
        {
            if(nums[i] == nums[j])
            {
                return true;
            }
        }
    }
    
    return false;
    
}
