/*
Runtime: 4 ms, faster than 88.13% of C online submissions for Best Time to Buy and Sell Stock II.
Memory Usage: 6.5 MB, less than 100.00% of C online submissions for Best Time to Buy and Sell Stock II.
*/

int maxProfit(int* prices, int pricesSize){
    
    int profit = 0;

    int i;

    for(i = 0; i < pricesSize-1; i++)
    {
       if(prices[i] < prices[i+1])
       {
           profit += (prices[i+1]-prices[i]);
       }
    }
    
    return profit;
}
