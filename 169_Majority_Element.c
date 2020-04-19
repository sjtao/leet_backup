/*
Runtime: 28 ms, faster than 13.52% of C online submissions for Majority Element.
Memory Usage: 7.9 MB, less than 100.00% of C online submissions for Majority Element.
*/

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int majorityElement(int* nums, int numsSize){

    qsort(nums, numsSize, sizeof(int), cmpfunc);
    
    return nums[numsSize/2];
    
}

/*
Runtime: 24 ms, faster than 17.18% of C online submissions for Majority Element.
Memory Usage: 7.4 MB, less than 100.00% of C online submissions for Majority Element.
*/
//Moore's voting algorithm
int majorityElement(int* nums, int numsSize){

    int i;  
    int freq = nums[0];
    int cnt = 1;
    
    for(i = 1; i < numsSize; i++)
    {
        if(nums[i] == freq)
        {
            cnt ++;
        }
        else
        {
            cnt --;
        }
        
        if(cnt == 0)
        {
            freq = nums[i];
            cnt = 1;
        }
        
    }   
    
    return freq;
}

/*
Runtime: 24 ms, faster than 17.18% of C online submissions for Majority Element.
Memory Usage: 7.5 MB, less than 100.00% of C online submissions for Majority Element.
*/
int majorityElement(int* nums, int numsSize){

    int count = 0;
    int result;
    
    for(int i = 0; i < numsSize; i ++)
    {
        if(count == 0 || result == nums[i])
        {
            result = nums[i];
            count++;
        }
        else
            count--;
    }
    
    return result;
}
