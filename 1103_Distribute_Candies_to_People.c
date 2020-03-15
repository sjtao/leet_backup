
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* distributeCandies(int candies, int num_people, int* returnSize){

    *returnSize = num_people;
    int *candy = calloc(num_people, sizeof(int));
    
    int num = 1;
    int index = 0;
    int i;
    
    while(candies > num)
    {
        i = index % num_people;
        candy[i] += num;
        candies -= num;
        num += 1;
        index += 1;
    }
    candy[index % num_people] += candies;
    
    return candy;
}
