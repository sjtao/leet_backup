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
