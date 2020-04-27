/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Pow(x, n).
Memory Usage: 5.1 MB, less than 100.00% of C online submissions for Pow(x, n).
*/


double myPow(double x, int n){
      
    if (x == 0 || x == 1)
    {
        return x;
    }
    if (n == 0)
    {
        return 1;
    }
    
    double result;
    int t = n / 2;
    if(n < 0) 
    {
        t = -t;
        x = 1 / x;
    }
    result = myPow(x, t);
    if(n % 2 == 0) return result * result;
    return result * result * x;
}
