

int maximumProduct(int* nums, int numsSize){

    int max1, max2, max3;
    int min1, min2;
    int i, j;
    int prod, prod1, prod2;
    int temp;
    
    for(i = 0; i<2; i++)
    {
        for(j = i+1; j<3; j++)
        {
            if(nums[i] > nums[j])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    
    max1 = nums[0];
    max2 = nums[1];
    max3 = nums[2]; //maximum
    
    min1 = nums[0]; //minimal
    min2 = nums[1];
    
    i = 3;
    while( i < numsSize)
    {
        if (max1 < nums[i] && nums[i] <= max2)
        {
            max1 = nums[i];
        }
        else if (max2 < nums[i] && nums[i] <= max3)
        {
            max1 = max2;
            max2 = nums[i];
        }
        else if (nums[i] > max3)
        {
            max1 = max2;
            max2 = max3;
            max3 = nums[i];
        }
        
        if(nums[i] <= min1)
        {
            min2 = min1;
            min1 = nums[i];
        }
        else if (min1 < nums[i] && nums[i] <= min2)
        {
            min2 = nums[i];
        }
        
        i ++;
    }
    
    prod1 = max1 * max2 * max3;
    prod2 = min1 * min2 * max3;
    
    prod = prod1 > prod2 ? prod1 : prod2;
    
    return prod;
}

