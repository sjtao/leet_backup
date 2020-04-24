/*
Runtime: 52 ms, faster than 71.30% of C online submissions for Array Partition I.
Memory Usage: 8.3 MB, less than 100.00% of C online submissions for Array Partition I.
*/

int compare(const int* a, const int* b) {
    return (*a - *b);
}

int arrayPairSum(int* nums, int numsSize){

    int i;
    int result = 0;
   
   qsort(nums, numsSize, sizeof(int),compare);
    
    for(i = 0; i < numsSize; i += 2)
    {
        result += nums[i];
    }
    
    return result;
}

