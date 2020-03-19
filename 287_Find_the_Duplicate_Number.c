/*
Runtime: 4 ms, faster than 100.00% of C online submissions for Find the Duplicate Number.
Memory Usage: 7 MB, less than 100.00% of C online submissions for Find the Duplicate Number.
*/

int findDuplicate(int* nums, int numsSize){

    int *count = calloc(numsSize +1, sizeof(int));
    
    int i;
    for(i=0; i< numsSize; i++)
    {
        count[nums[i]] ++;
    }
    
    for(i=1; i<numsSize+1; i++)
    {
        if(count[i]>1)
        {
            break;
        }
    }
    
    return i;
}

