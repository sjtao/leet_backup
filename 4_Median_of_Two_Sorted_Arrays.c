/*
Runtime: 32 ms, faster than 9.83% of C online submissions for Median of Two Sorted Arrays.
Memory Usage: 6.4 MB, less than 24.63% of C online submissions for Median of Two Sorted Arrays.
*/

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    double median;
    
    int num = nums1Size + nums2Size;
    
    int *array;
    array = malloc(num * sizeof (int));
    int i, j, k, cnt;
    
    i = 0;
    j = 0;
    cnt = 0;
    while (i < nums1Size && j < nums2Size)
    {
        if(nums1[i] < nums2[j])
        {
            array[cnt++] = nums1[i];
            i++;
        }
        else
        {
            array[cnt++] = nums2[j];
            j++;
        }
    }
    
    if (i == nums1Size)
    {
        for(k = j; k < nums2Size; k++)
        {
            array[cnt++] = nums2[k];
        }
    }
    
    if (j == nums2Size)
    {
        for(k = i; k < nums1Size; k++)
        {
            array[cnt++] = nums1[k];
        }
    }
    
    if (num % 2 != 0)
    {
        median = array[num/2];
    }
    else
    {
        median = (array[num/2] + array[num/2-1]) * 0.5;
    }
    
    return median;
}
