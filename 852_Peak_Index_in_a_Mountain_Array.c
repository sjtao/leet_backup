/*
Runtime: 8 ms, faster than 92.72% of C online submissions for Peak Index in a Mountain Array.
Memory Usage: 5.9 MB, less than 100.00% of C online submissions for Peak Index in a Mountain Array.
*/

int peakIndexInMountainArray(int* A, int ASize){

    int i;
    
    for(i = 1; i < ASize; i++)
    {
        if(A[i]-A[i+1] > 0)
        {
            break;
        }
    }
    return i;
}

/*
Runtime: 8 ms, faster than 92.72% of C online submissions for Peak Index in a Mountain Array.
Memory Usage: 6.1 MB, less than 100.00% of C online submissions for Peak Index in a Mountain Array.
*/
int peakIndexInMountainArray(int* A, int ASize){

    int half = ASize/2;
    int peak;
    
    if(A[half-1] < A[half] && A[half] < A[half+1])
    {
        for(int i = half; i < ASize; i++)
        {
            if(A[i]-A[i+1] > 0)
            {
                peak = i;
                break;
            }
        }
    }
    else if (A[half-1] > A[half] && A[half] > A[half+1])
    {
        for(int i = half; i >= 0; i--)
        {
            if(A[i]-A[i-1] > 0)
            {
                peak = i;
                break;
            }
        }
    }
    else if(A[half-1] < A[half] && A[half] > A[half+1])
    {
        peak = half;
    }
    
    return peak;
}

/*
Runtime: 8 ms, faster than 92.72% of C online submissions for Peak Index in a Mountain Array.
Memory Usage: 5.9 MB, less than 100.00% of C online submissions for Peak Index in a Mountain Array.
*/
int peakIndexInMountainArray(int* A, int ASize){

    int left = 0;
    int right = ASize;
    int mid;
    
    while(left < right)
    {
        mid = left + (right - left)/2;
        
        if(A[mid] > A[mid+1])
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    
    return right;
}

