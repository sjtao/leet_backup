/*
Runtime: 8 ms, faster than 36.11% of C online submissions for Intersection of Two Arrays.
Memory Usage: 6 MB, less than 100.00% of C online submissions for Intersection of Two Arrays.
*/



/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    
    int size = nums1Size < nums2Size ? nums1Size : nums2Size;
    
    if(nums1Size == 0)
    {
        * returnSize = size;
        return nums1;
    }
    if(nums2Size == 0)
    {
        * returnSize = size;
        return nums2;
    }
    
    int * inter = malloc(size * sizeof(int));
    int i, j;
    int cnt1, cnt2;
    
    //sort
    qsort (nums1, nums1Size, sizeof(int), cmpfunc);
    qsort (nums2, nums2Size, sizeof(int), cmpfunc);
    
    //unique
    int *uarr1 = malloc(nums1Size*sizeof(int));
    uarr1[0] = nums1[0];
    cnt1 = 1;
    for(int i = 1; i < nums1Size; i++)
    {
        if(nums1[i] != nums1[i-1])
        {
            uarr1[cnt1++] = nums1[i];
        }
    }
    
    int *uarr2 = malloc(nums2Size*sizeof(int));
    uarr2[0] = nums2[0];
    cnt2 = 1;
    for(int i = 1; i < nums2Size; i++)
    {
        if(nums2[i] != nums2[i-1])
        {
            uarr2[cnt2++] = nums2[i];
        }
    }
    
    //compare
    int s = 0;
    for(i = 0; i < cnt1; i++)
    {
        for(j = 0; j < cnt2; j++)
        {
            if(uarr1[i] == uarr2[j])
            {
                inter[s++] = uarr2[j];
                break;
            }
        }
    }
    
    *returnSize = s;
    return inter;
    
}

//fastest
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int *result, i1, i2, newLen;
  
    qsort(nums1, nums1Size, sizeof(int), compare);
    qsort(nums2, nums2Size, sizeof(int), compare);
    
    newLen = nums1Size < nums2Size ? nums1Size : nums2Size;
    if ((result = malloc(sizeof(int[newLen]))) == NULL)
        return NULL;
    
    for (i1 = i2 = newLen = 0; i1 < nums1Size && i2 < nums2Size;)
        if (nums1[i1] == nums2[i2]) {
            if (newLen == 0 || result[newLen - 1] != nums1[i1])
                result[newLen++] = nums1[i1];
            i1++; 
            i2++;
        } else if (nums1[i1] < nums2[i2])
            i1++;
        else
            i2++;
    *returnSize = newLen;
    
    return result;
}
