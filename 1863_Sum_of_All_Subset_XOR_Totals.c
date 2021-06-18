/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Sum of All Subset XOR Totals.
Memory Usage: 6.1 MB, less than 8.60% of C online submissions for Sum of All Subset XOR Totals.
*/

int xorSum(int *arr, int n)
{
    int bits = 0;
 
    for (int i=0; i < n; ++i)
        bits |= arr[i];
 
    int ans = bits * pow(2, n-1);
 
    return ans;
}

int subsetXORSum(int* nums, int numsSize){
    
    return xorSum(nums, numsSize);

}
