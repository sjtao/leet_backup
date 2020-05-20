/*
Runtime: 132 ms, faster than 11.43% of C online submissions for Minimum Absolute Difference.
Memory Usage: 16.1 MB, less than 100.00% of C online submissions for Minimum Absolute Difference.
*/



/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

int compare(const void * a, const void * b) 
{ 
    return ( *(int*)a - *(int*)b ); 
} 

int** minimumAbsDifference(int* arr, int arrSize, int* returnSize, int** returnColumnSizes){
    
    int i, j;
    
    qsort(arr, arrSize, sizeof(int), compare);
    int min = arr[1]-arr[0];
    
    for(i = 1; i<arrSize-1; i++)
    {
        min = min < (arr[i+1]-arr[i]) ? min : (arr[i+1]-arr[i]);
    }
      
    int **pair = malloc(arrSize * sizeof(int*));
    *returnColumnSizes = malloc(arrSize * sizeof(int*));
    
    int cnt = 0;
    for(i = 0; i < arrSize-1; i++)
    {
        if(arr[i+1] - arr[i] == min)
        {
            (*returnColumnSizes)[cnt] = 2;
            pair[cnt] = malloc(2 * sizeof(int*));
            
            pair[cnt][0] = arr[i];
            pair[cnt][1] = arr[i+1];
            cnt++;
        }
    }
    
    *returnSize = cnt;
    
    return pair;                        
}
