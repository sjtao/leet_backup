/*
Runtime: 316 ms, faster than 23.13% of C online submissions for Two Sum II - Input array is sorted.
Memory Usage: 6.4 MB, less than 100.00% of C online submissions for Two Sum II - Input array is sorted.
*/

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){

    int *index = malloc(2 * sizeof(int));
    
    * returnSize = 2;
    
    int i, j;
    int temp;
    for(i = 0; i < numbersSize; i++)
    {
        temp = target - numbers[i];
        for(j = numbersSize-1; j > i; j--)
        {
            if(numbers[j] == temp)
            {
                index[0] = i+1;
                index[1] = j+1;
                return index;
            }
            else if(numbers[j] < temp)
            {
                break;
            }
        }
    }
    
    return;
}
