/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Count of Matches in Tournament.
Memory Usage: 5.4 MB, less than 67.95% of C online submissions for Count of Matches in Tournament.
*/

int numberOfMatches(int n){
    int tour = 0;
    while (n > 1)
    {
        tour += n/2;
        n = (n/2 + n%2);
    }
    
    return tour;

}
