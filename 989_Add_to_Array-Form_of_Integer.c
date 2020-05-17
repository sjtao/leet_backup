/*
Runtime: 88 ms, faster than 82.76% of C online submissions for Add to Array-Form of Integer.
Memory Usage: 15.6 MB, less than 100.00% of C online submissions for Add to Array-Form of Integer.
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* addToArrayForm(int* A, int ASize, int K, int* returnSize){

    if(K==0)
    {
        *returnSize = ASize;
        return A;
    }
    
    int lenK = log10(K)+1;
    int len = ASize >= lenK ? ASize : lenK;
    
    int *result = malloc((len+2)*sizeof(int));
    int *k = malloc(lenK*sizeof(int));
    
    int i, j;
    
    i=0;
    while(K>0)
    {
        k[i++] = K % 10;
        K /= 10;
    }
    
    int carry = 0;
    int l = 0;
    i = ASize - 1;
    j = 0;
    while(i >= 0 || j < lenK)
    {
        carry += (i>=0) ? A[i--] : 0;
        carry += (j<lenK) ? k[j++] : 0;
        
        result[l++] = carry % 10;
        carry /= 10;
    }
    if(carry != 0) result[l++] = carry;
    
    //reverse
    int temp;
    for(i = 0; i < l/2; i++)
    {
        temp = result[i];
        result[i] = result[l-1-i];
        result[l-1-i] = temp;
    }
    
    *returnSize = l;
    return result;
}
