

bool uniqueOccurrences(int* arr, int arrSize){
/*    
    if(arrSize == 1)
    {
        return 1;
    }
    
    bool unique = true;
    
    int *cnt = calloc(2001, sizeof(int)); //count occurrences in the given array
    int min = 1000;
    
    for(int i = 0; i < arrSize; i++)
    {
        cnt[arr[i]+min]++;
    }

    for(int i = 0; i < 2001; i++)
    {
        for(int j = i+1; j < 2001; j++)
        {
            if (cnt[i]!=0 && cnt[j]!=0 && cnt[i]==cnt[j])
            {
                unique = false;
            }
        }
    }
    
    return unique;
*/
/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Unique Number of Occurrences.
Memory Usage: 6.4 MB, less than 100.00% of C online submissions for Unique Number of Occurrences.
*/
    int *cnt = calloc(2001, sizeof(int)); //count occurrences in the given array
    int *occnt = calloc(arrSize, sizeof(int)); //count occurrence of the occurrence
    int min = 1000;
    bool unique = true;
    
    for(int i = 0; i < arrSize; i++)
    {
        cnt[arr[i]+min]++;
    }
    
    for(int i = 0; i < 2001; i++)
    {
        occnt[cnt[i]]++;
    }
    
    for(int i = 1; i < arrSize; i++)
    {
        if(occnt[i] > 1)
        {
            unique = false;
            break;
        }
    }
    
    
    return unique;
    
}

