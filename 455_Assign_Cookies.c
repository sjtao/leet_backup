/*
Runtime: 1644 ms, faster than 12.20% of C online submissions for Assign Cookies.
Memory Usage: 6.7 MB, less than 100.00% of C online submissions for Assign Cookies.
*/

int *sort(int *arr, int size)
{
    int temp;
    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

int findContentChildren(int* g, int gSize, int* s, int sSize){
    
    int count = 0;
    int max = pow(2,31)-1;
    int i, j;
    int init = 0;
    g = sort(g, gSize);
    s = sort(s, sSize);
    
    for(j = 0; j < sSize; j++)
    {
        for(i = init; i < gSize; i++)
        {
            if(s[j] >= g[i])
            {
                count ++;
                init = i + 1;
                break;
            }
        }
    }
    
    return count;
}


/*
Runtime: 32 ms, faster than 58.54% of C online submissions for Assign Cookies.
Memory Usage: 7.1 MB, less than 100.00% of C online submissions for Assign Cookies.
*/

int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int findContentChildren(int* g, int gSize, int* s, int sSize)
{
    
    qsort(g, gSize, sizeof(int), compare);
    qsort(s, sSize, sizeof(int), compare);
    
    int child = 0;
    int cookie = 0;
    
    while(child < gSize && cookie < sSize)
    {
        if(s[cookie] >= g[child])
        {
            child++;
            cookie++;
        }
        else
        {
            cookie++;
        }
    }
    
    return child;
}
