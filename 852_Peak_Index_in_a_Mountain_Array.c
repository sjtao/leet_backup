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
