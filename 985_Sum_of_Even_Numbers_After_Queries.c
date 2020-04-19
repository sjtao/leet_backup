/*
Runtime: 300 ms, faster than 11.43% of C online submissions for Sum of Even Numbers After Queries.
Memory Usage: 21.2 MB, less than 100.00% of C online submissions for Sum of Even Numbers After Queries
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int evensum(int *a, int size)
{
    int i;
    int sum = 0;
    
    for(i = 0; i < size; i++)
    {
        if(a[i] % 2 == 0)
        {
            sum += a[i];
        }
    }
    
    return sum;
}

int* sumEvenAfterQueries(int* A, int ASize, int** queries, int queriesSize, int* queriesColSize, int* returnSize){

    int val, index, i;
    int *qsum = malloc(queriesSize * sizeof(int));
    int initevensum = evensum(A, ASize);
    
    for(i = 0; i < queriesSize; i++)
    {
        val = queries[i][0];
        index = queries[i][1];
        
        if(A[index] % 2 != 0 && val % 2 != 0)
        {
            A[index] += val;
            initevensum += A[index];
        }
        else if(A[index] % 2 == 0 && val % 2 == 0)
        {
            A[index] += val;
            initevensum += val;
        }
        else if(A[index] % 2 == 0 && val % 2 != 0)
        {
            initevensum -= A[index];
            A[index] += val;
        }
        else if(A[index] % 2 != 0 && val % 2 == 0)
        {
            A[index] += val;
        }
        
        qsum[i] = initevensum;
        
    }
    
    *returnSize = queriesSize;
    
    return qsum;
}

