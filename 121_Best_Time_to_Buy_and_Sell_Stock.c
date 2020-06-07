/*
Runtime: 1296 ms, faster than 5.04% of C online submissions for Best Time to Buy and Sell Stock.
Memory Usage: 6.4 MB, less than 70.32% of C online submissions for Best Time to Buy and Sell Stock.
*/

int maxProfit(int* prices, int pricesSize){
    
    if(pricesSize < 2)
    {
        return 0;
    }
    
    int i, j, k;
    int df = 0;
    
    for(i = 0; i < pricesSize-1; i++)
    {
        for(j = i+1; j < pricesSize; j++)
        {
            k = prices[j]-prices[i];
            if(k > df)
            {
                df = k;
            }
        }
    }
    
    return df;
}

/*
Runtime: 8 ms, faster than 42.52% of C online submissions for Best Time to Buy and Sell Stock.
Memory Usage: 6.5 MB, less than 49.32% of C online submissions for Best Time to Buy and Sell Stock.
*/
int maxProfit(int* prices, int pricesSize){
    
    if(pricesSize < 2)
    {
        return 0;
    }
    
    int i, j, k;
    int min = prices[0];
    int max = 0;
    
    for(i = 0; i < pricesSize; i++)
    {
        if(prices[i] < min)
        {
            min = prices[i];
        }
        else if(prices[i] - min > max)
        {
            max = prices[i] - min;
        }
    }
    
    return max;
}
