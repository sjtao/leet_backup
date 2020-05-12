/*
Runtime: 4 ms, faster than 79.43% of C online submissions for Kids With the Greatest Number of Candies.
Memory Usage: 5.8 MB, less than 100.00% of C online submissions for Kids With the Greatest Number of Candies.
*/

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){

    int max = candies[0];
    int i;
    for(i = 1; i < candiesSize; i++)
    {
        max = (max > candies[i] ? max : candies[i]);
    }
    
    bool *great = malloc(candiesSize * sizeof(bool));
    int em = max - extraCandies;
    
    for(i = 0; i < candiesSize; i++)
    {
        //great[i] = (candies[i] >= em ? 1 : 0);
        great[i] = (candies[i] >= em);
    }
    
    *returnSize = candiesSize;
    
    return great;
    
}
