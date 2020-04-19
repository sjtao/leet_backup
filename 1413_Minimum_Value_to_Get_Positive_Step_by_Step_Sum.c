/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Minimum Value to Get Positive Step by Step Sum.
Memory Usage: 5.3 MB, less than 100.00% of C online submissions for Minimum Value to Get Positive Step by Step Sum.
*/

int minStartValue(int* nums, int numsSize){
    int sv = 1;
    int i;
    int sum = 0;
    
    for(i = 0; i < numsSize; i++)
    {
        sum += nums[i];
        if(sum + sv < 1)
        {
            sv = 1-sum;
        }
    }
    
    return sv;
}
