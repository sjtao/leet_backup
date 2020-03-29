int* sumZero(int n, int* returnSize){
    *returnSize = n;
    int *array = malloc(n * sizeof(int));
    
    int low = 0;
    int high = n - 1;
    int num = 1;
    while (low < high)
    {
        array[low] = num;
        array[high] = -num;
        low ++;
        high --;
        num ++;
    }
    if(low == high)
    {
        array[low] = 0;
    }
    
    return array;
}
