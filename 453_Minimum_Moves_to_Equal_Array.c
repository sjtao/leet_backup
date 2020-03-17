/*
k (final value) -------------------------------
                      --     --
initial a[i]            ----
                  ----          ----

then sum(k-a[i]) = (n-1)(k-min) --> nk - sum = (n-1)k-(n-1)min --> k = sum - (n-1)min
total move:  k-min = sum - n*min = sum(a[i]-min) (avoid overflow)
*/


int minMoves(int* nums, int numsSize){
    
    int move = 0; 
    
    if (numsSize <= 1)
    {
        return 0;
    }
    
    int sum = nums[0];
    int min = nums[0];
    int max = nums[0];
    int i;
    
    for(i = 1; i < numsSize; i++)
    {
        //sum += nums[i];
        if(min > nums[i]) min = nums[i];
        if(max < nums[i]) max = nums[i];
    }
    
    if(max != min)
    {
        //move = sum - numsSize*min; //overflow for test [1,2147483647]
        for(i = 0; i < numsSize; i++)
        {
            move += nums[i] - min;
        }
    }
    else
    {
        move = 0;
    }
    
    return move;

}

