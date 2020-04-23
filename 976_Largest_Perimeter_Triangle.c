/*
Runtime: 40 ms, faster than 61.11% of C online submissions for Largest Perimeter Triangle.
Memory Usage: 7.3 MB, less than 100.00% of C online submissions for Largest Perimeter Triangle.
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

int largestPerimeter(int* A, int ASize){
    
    if(ASize < 3)
        return 0;
    
    qsort(A, ASize, sizeof(int), compare);
    
    int i = ASize - 1;
    while(i > 1)
    {
        if(A[i-2] + A[i-1] > A[i])
        {
            return A[i-2] + A[i-1] + A[i]; 
        }
        else
        {
            i--;
        }
    }
    
    return 0;
}
