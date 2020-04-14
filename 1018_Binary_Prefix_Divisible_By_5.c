/*
Runtime: 24 ms, faster than 94.29% of C online submissions for Binary Prefix Divisible By 5.
Memory Usage: 9.8 MB, less than 100.00% of C online submissions for Binary Prefix Divisible By 5.
*/


bool* prefixesDivBy5(int* A, int ASize, int* returnSize){

    *returnSize = ASize;
    bool *prefix = malloc(ASize * sizeof(bool));
    
    int temp = 0;
    for (int i = 0; i < ASize; i++)
    {
        temp = (temp * 2 + A[i]) % 5;
        prefix[i] = (temp == 0);    
    }
    
    return prefix;
}
