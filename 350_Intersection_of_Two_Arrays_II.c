/*
Runtime: 12 ms, faster than 24.21% of C online submissions for Intersection of Two Arrays II.
Memory Usage: 5.9 MB, less than 100.00% of C online submissions for Intersection of Two Arrays II.
*/



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int compare_ints(const void* a, const void* b)
{
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
 
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){

    if(nums1Size == 0)
    {
        * returnSize = 0;
        return nums1;
    }
    if(nums2Size == 0)
    {
        * returnSize = 0;
        return nums2;
    }
    
    int size = nums1Size < nums2Size ? nums1Size : nums2Size;
    int * inter = malloc(size * sizeof(int));
    
    //sort
    qsort (nums1, nums1Size, sizeof(int), compare_ints);
    qsort (nums2, nums2Size, sizeof(int), compare_ints);
    
    int le = 0;
    int rh = 0;
    int nt = 0;
    while(le < nums1Size && rh < nums2Size)
    {
        if(nums1[le] < nums2[rh])
        {
            le ++;
        }
        else if(nums1[le] == nums2[rh])
        {
            inter[nt++] = nums1[le];
            le ++;
            rh ++;
        }
        else
        {
            rh ++;
        }
    }
    
    *returnSize = nt;
    return inter;
}

