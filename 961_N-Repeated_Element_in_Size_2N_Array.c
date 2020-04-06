/*
Runtime: 28 ms, faster than 86.96% of C online submissions for N-Repeated Element in Size 2N Array.
Memory Usage: 11.8 MB, less than 16.67% of C online submissions for N-Repeated Element in Size 2N Array.
*/

int repeatedNTimes(int* A, int ASize){
    
    int *cnt = calloc(10000, sizeof(int));
   
    for (int i = 0; i < ASize; i++)
    {
        cnt[A[i]]++;
        if(cnt[A[i]] > 1)
        {
            return A[i];
        }
    }
    
    return 0;
    
}
