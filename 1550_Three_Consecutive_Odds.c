/*
Runtime: 4 ms, faster than 85.29% of C online submissions for Three Consecutive Odds.
Memory Usage: 5.8 MB, less than 45.10% of C online submissions for Three Consecutive Odds.
*/

bool threeConsecutiveOdds(int* arr, int arrSize){
    bool odd = 0;
    int i;
    for(i = 0; i < arrSize-2; i++)
    {
        if((arr[i]%2)*(arr[i+1]%2)*(arr[i+2]%2) != 0)
        {
            odd = 1;
            break;
        }
    }
    return odd;
}
