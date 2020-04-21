
/*
Runtime: 4 ms, faster than 63.13% of C online submissions for Remove Element.
Memory Usage: 5.8 MB, less than 100.00% of C online submissions for Remove Element.
*/

int removeElement(int* nums, int numsSize, int val){
    
    int i = 0, j = 0;
    int temp;
    int length = numsSize;
    
    while(i < numsSize)
    {
        if(nums[i] == val)
        {
            i++;
            length--;
        }          
        else
        {
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j++;
        }
    }

    return length;
}

/*
Runtime: 4 ms, faster than 63.13% of C online submissions for Remove Element.
Memory Usage: 5.7 MB, less than 100.00% of C online submissions for Remove Element.
*/

int removeElement(int* nums, int numsSize, int val)
{
    int i;
    int j = 0;
    
    for (i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            if (j < i)
                nums[j] = nums[i];
            j++;
        }
    }
    
    return j;
}
