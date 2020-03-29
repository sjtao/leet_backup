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

int* sumZero(int n, int* returnSize){
    int * arr = calloc(n, sizeof(int));
    for(int i =0;i<n/2;i++)
    {
        arr[i] = (n-2*i)/2;
        arr[n-i-1] = -(n-2*i)/2; //-arr[i];   //direct calculation is much faster than the array way
    }
    *returnSize = n;
    return arr;
}
