/*
Runtime: 20 ms, faster than 68.01% of C online submissions for Contains Duplicate.
Memory Usage: 8.2 MB, less than 100.00% of C online submissions for Contains Duplicate.
*/
int compare(const void* a, const void* b)
{
	const int* x = (int*) a;
	const int* y = (int*) b;

	if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;

	return 0;
}

bool containsDuplicate(int* nums, int numsSize){

    int i;
    
    qsort(nums, numsSize, sizeof(int),compare);
    
    for(i = 0; i < numsSize-1; i++)
    {
        if(nums[i] == nums[i+1])
        {
            return true;
        }
    }
    
    return false;
}

