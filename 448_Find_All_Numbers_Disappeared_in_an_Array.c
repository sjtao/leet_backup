/*
Runtime: 96 ms, faster than 88.17% of C online submissions for Find All Numbers Disappeared in an Array.
Memory Usage: 18.5 MB, less than 100.00% of C online submissions for Find All Numbers Disappeared in an Array.
*/

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize){
    
    int *count = calloc(numsSize+1, sizeof(int));
    int *zero = calloc(numsSize+1, sizeof(int));
    
    int i;
    for(i = 0; i < numsSize; i++)
    {
        count[nums[i]]++;
    }
    
    int cnt = 0;
    for(i = 1; i < numsSize + 1; i++)
    {
        if(count[i] == 0)
        {
            zero[cnt++] = i;
        }
    }
    
    *returnSize = cnt;
    return zero;
}

