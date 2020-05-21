/*
Runtime: 8 ms, faster than 97.33% of C online submissions for Element Appearing More Than 25% In Sorted Array.
Memory Usage: 6 MB, less than 100.00% of C online submissions for Element Appearing More Than 25% In Sorted Array.
*/

int findSpecialInteger(int* arr, int arrSize){

    int n = arrSize / 4;
    int i;
    for(i = 0; i < arrSize - n; i++)
    {
        if(arr[i] == arr[i+n])
        {
            return arr[i];
        }
    }
    return;
}
