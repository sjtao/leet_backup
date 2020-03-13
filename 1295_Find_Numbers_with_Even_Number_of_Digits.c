bool evenDigits(int n)
{
    int i = 0;
    while(n > 0)
    {
        n = n / 10;
        i = i + 1;
    }
    return (i%2 == 0);
}

int findNumbers(int* nums, int numsSize){

    int count = 0;
    for(int i = 0; i < numsSize; i++)
    {
        count = count + evenDigits(nums[i]);
    }
    return count;
}
