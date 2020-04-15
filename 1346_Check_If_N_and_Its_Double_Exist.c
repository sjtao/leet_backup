
/*
Runtime: 12 ms, faster than 13.43% of C online submissions for Check If N and Its Double Exist.
Memory Usage: 5.6 MB, less than 100.00% of C online submissions for Check If N and Its Double Exist.
*/

bool checkIfExist(int* arr, int arrSize){
    
    bool d = false;
    int i, j;
    
    for(i = 0; i < arrSize; i++)
    {
        for(j = i+1; j < arrSize; j++)
        {
            if(arr[i] == 2 * arr[j] || arr[j] == 2 * arr[i])
            {
                d = true;
                break;
            }
        }
    }
    
    return d;
}

/*
Runtime: 4 ms, faster than 94.03% of C online submissions for Check If N and Its Double Exist.
Memory Usage: 5.9 MB, less than 100.00% of C online submissions for Check If N and Its Double Exist.
*/

bool checkIfExist(int* arr, int arrSize){
    
    for(int i = 0; i < arrSize; i++)
    {
        for(int j = i+1; j < arrSize; j++)
        {
            if(arr[i] == 2 * arr[j] || arr[j] == 2 * arr[i])
            {
                return true;
            }
        }
    }
    
    return false;
}
