/*
Runtime: 0 ms, faster than 100.00% of C online submissions for The kth Factor of n.
Memory Usage: 5.4 MB, less than 82.35% of C online submissions for The kth Factor of n.
*/


int kthFactor(int n, int k){
    
    int result = -1;
    int idx = 1;
    int num = 1;
    while (num <= n)
    {
        if(n % num == 0)
        {
            if(idx == k)
            {
                result = num;
                break;
            }
            idx++;
        }
        num++;
    }
    
    return result;
}
