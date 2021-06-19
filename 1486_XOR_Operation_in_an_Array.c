/*
Runtime: 0 ms, faster than 100.00% of C online submissions for XOR Operation in an Array.
Memory Usage: 5.6 MB, less than 53.94% of C online submissions for XOR Operation in an Array.
*/

int xorOperation(int n, int start){
    int i, result = start;
    //nums[i]=start+2*i
    for(i = 1; i < n; i++)
    {
        result ^= (start+2*i);
    }
    return result;
}
