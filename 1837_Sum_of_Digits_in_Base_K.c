/*
Runtime: 0 ms, faster than 100.00% of C online submissions for Sum of Digits in Base K.
Memory Usage: 5.3 MB, less than 99.13% of C online submissions for Sum of Digits in Base K.
*/

int sumBase(int n, int k){
    int sum = 0;
    while (n > 0)
    {
        sum += n % k;
        n /= k;
    }
    return sum;
}
