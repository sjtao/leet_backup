/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Number of Good Pairs.
Memory Usage: 5.5 MB, less than 100.00% of C online submissions for Number of Good Pairs.
*/


int numIdenticalPairs(int* nums, int numsSize){
    if(numsSize == 1) return 0;
    
    int cnt = 0;
    int i, j;
    
    for(i = 0; i < numsSize - 1; i ++)
    {
        for(j = i+1; j < numsSize; j++)
        {
            if (nums[i] == nums[j])
            {
                cnt ++;
            }
        }
    }
    
    return cnt;
}
