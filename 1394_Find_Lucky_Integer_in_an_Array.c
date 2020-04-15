/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Find Lucky Integer in an Array.
Memory Usage: 5.9 MB, less than 100.00% of C online submissions for Find Lucky Integer in an Array.
*/

int findLucky(int* arr, int arrSize){
    int freq[501] = {0};
    int lucky = -1;
    
    for(int i = 0; i < arrSize; i++)
    {
        freq[arr[i]]++;
    }
    
    for(int i = 0; i < arrSize; i++)
    {
        if (freq[arr[i]] == arr[i])
            lucky = (arr[i] > lucky ? arr[i] : lucky);
    }
    
    return lucky;
}
