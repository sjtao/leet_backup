/*
Runtime: 188 ms, faster than 33.33% of C online submissions for Distribute Candies.
Memory Usage: 13 MB, less than 100.00% of C online submissions for Distribute Candies.
*/

int compare_ints(const void* a, const void* b)
{
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
 
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}

int distributeCandies(int* candies, int candiesSize){

    int i;
    int kinds = 1;
    
    qsort(candies, candiesSize, sizeof(int), compare_ints);
    
    for(i = 1; i < candiesSize; i++)
    {
        if(candies[i] != candies[i-1])
            kinds++;
    }
    
    return (kinds > candiesSize/2 ? candiesSize/2 : kinds);
    
}
