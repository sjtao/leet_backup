/*
Runtime: 48 ms, faster than 62.96% of C online submissions for Partition Array Into Three Parts With Equal Sum.
Memory Usage: 8.1 MB, less than 100.00% of C online submissions for Partition Array Into Three Parts With Equal Sum.
*/



bool canThreePartsEqualSum(int* A, int ASize){
    
    int sum = 0;
    int i, j;
    for(i = 0; i < ASize; i++)
    {
        sum += A[i];
    }
    
    if(sum % 3 != 0)
    {
        return false;
    }
    
    int lsum = 0, rsum = 0;
    for(i = 0; i < ASize; i++)
    {
        lsum += A[i];
        if(lsum == sum / 3)
        {
            break;
        }
    }
    for(j = ASize-1; j >= 0; j--)
    {
        rsum += A[j];
        if(rsum == sum / 3)
        {
            break;
        }
    }
    
    if(i+1 > j-1)
    {
        return false;
    }
    
    return true;
}

